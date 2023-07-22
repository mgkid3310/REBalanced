import os, re, openpyxl

engine_profile = openpyxl.load_workbook('REB Engine Profile.xlsx', data_only = True)
vehicle_sheet = engine_profile['IRL']
thrust_sheet = engine_profile['Thrust']

vehicle_conv = {
	'GR.7A/9A': 'AV8B'
}

engine_conv = {
	'F-15E': {
		'F100-PW-220': 'F100-PW-220_E'
	}
}

config_dict = {
	'zfWeight': 'zfw',
	'fuelWeight': 'fuel',
	'grossWeight': 'gw',
	'refThrust': 'abThrust',
	'milThrust': 'milThrust',
	'abThrust': 'abThrust',
	'fuelCapacity': 'fuelCap',
	'abFuelMultiplier': 'ffRatio'
}

fuelCFT = 1380 # 450 US Gallons = 1380 kg

def rightpad(string: str, length: int = 18, char: str = '0') -> str:
	string += max(length - len(string), 0) * char

	if float(string) == 0:
		return '0'

	return string[:length]

def effNum(number, count: int = 4) -> str:
	if number is None or number == 0:
		return '0'

	chars: list[str] = []
	length, rp = 0, 0
	dot, ld = False, True
	for char in list(str(number)):
		if char == '.':
			dot = True

		if length < count:
			chars.append(char)

			if char.isdigit():
				length += 1
		else:
			if char.isdigit():
				if not dot:
					rp += 1

				if ld:
					if int(char) >= 5:
						chars[-1] = str(int(chars[-1]) + 1)
					ld = False

			if dot and not ld:
				break

	rev = chars[::-1]
	cf = False
	if rev[0].isdigit() and int(rev[0]) > 9:
		rev[0] = '0'
		cf = True

	for idx, char in enumerate(rev):
		if idx == 0 or not char.isdigit():
			continue

		if cf:
			if char == '9':
				rev[idx] = '0'
			else:
				rev[idx] = str(int(char) + 1)
				cf = False

	if cf:
		rev.append('1')
		rev = rev[1:]

	return ''.join(rev[::-1]) + '0' * rp

def find_match(item: str, target: list[str]) -> str:
	if item in target:
		return item

	for idx, char in enumerate(item):
		target = [a for a in target if a[idx] == char]
		if len(target) == 1:
			return target[0]

	print('two hits')
	return ''

def vehicle2addon(vehicle: str) -> str:
	if vehicle in vehicle_conv:
		vehicle = vehicle_conv[vehicle]

	vehicle = vehicle.upper()
	vehicle = vehicle.replace('-', '').replace('/', '')

	addons = [f[8:] for f in os.listdir('addons/') if 'preConfig' not in f]

	return f'REB_FIR_{find_match(vehicle, addons)}'

def get_value(row: int, col: int) -> str:
	if not col < len(thrust_sheet[row]):
		return ''

	if thrust_sheet[row][col].value is None:
		return ''

	return str(thrust_sheet[row][col].value)

def get_vehicle(row: int, col: int) -> str:
	return get_value(row * 30 + 1, col * 5)

def get_engine(row: int, col: int) -> str:
	return get_value(row * 30 + 2, col * 5)

def get_thrust(row: int, col: int, idx: int) -> str:
	return get_value(row * 30 + idx + 7, col * 5 + 1)

def get_thrustCoef(row: int, col: int) -> list[str]:
	profile: list[str] = []
	idx: int = 0
	while get_thrust(row, col, idx) != '':
		profile.append(rightpad(get_thrust(row, col, idx)))
		idx += 1

	return profile

vehicle_dicts: list[dict] = []
for row_list in vehicle_sheet.iter_rows(min_row = 3):
	if row_list[0].value is None or row_list[1].value is None:
		continue

	vehicle = str(row_list[0].value)
	engine = str(row_list[1].value)

	if vehicle in engine_conv:
		if engine in engine_conv[vehicle]:
			engine = engine_conv[vehicle][engine]

	vehicle_dicts.append({
		'addon': vehicle2addon(vehicle),
		'engine': engine,
		'zfw': int(str(row_list[3].value)),
		'fuel': int(str(row_list[4].value)),
		'gw': int(str(row_list[5].value)),
		'milThrust': effNum(row_list[11].value),
		'abThrust': effNum(row_list[12].value),
		'fuelCap': effNum(row_list[24].value),
		'ffRatio': effNum(row_list[25].value)
	})

thrust_dicts: list[dict] = []
row: int = 0
col: int = 0
while get_vehicle(row, col) != '':
	while get_vehicle(row, col) != '':
		vehicle = get_vehicle(row, col)
		engine = get_engine(row, col)
		thrustCoef = get_thrustCoef(row, col)

		if vehicle in engine_conv:
			if engine in engine_conv[vehicle]:
				engine = engine_conv[vehicle][engine]

		thrust_dicts.append({
			'addon': vehicle2addon(vehicle),
			'engine': engine,
			'thrustCoef': thrustCoef
		})
		col += 1

	row += 1
	col = 0

for dir in os.listdir('addons/'):
	if 'preConfig' in dir:
		continue

	for file in os.listdir(f'addons/{dir}/config'):
		if file == 'common.hpp':
			continue

		vehicle = dir[8:]
		engine = file[:-4]

		vehicle_candidates = [d for d in vehicle_dicts if d['addon'] == dir]
		vehicle_engine = find_match(engine, [d['engine'] for d in vehicle_candidates])

		thrust_candidates = [d for d in thrust_dicts if d['addon'] == dir]
		thrust_engine = find_match(engine, [d['engine'] for d in thrust_candidates])

		if thrust_engine == '':
			print(f'no match for {engine}')
			continue

		vehicle_configs = [d for d in vehicle_candidates if d['engine'] == vehicle_engine]
		thrust_configs = [d for d in thrust_candidates if d['engine'] == thrust_engine]
		if len(vehicle_configs) != 1 or len(thrust_configs) != 1:
			print(f'engine match error: {vehicle} {engine}')
			continue

		vehicle_config = vehicle_configs[0]
		thrustCoef = thrust_configs[0]['thrustCoef']
		print(f'{vehicle} {engine}: match found')

		idx0 = -1
		with open(f'addons/{dir}/config/{file}', 'r') as f:
			lines = f.readlines()
			for idx, line in enumerate(lines):
				for key in config_dict:
					value = vehicle_config[config_dict[key]]
					if 'CFT' in engine:
						if key == 'fuelWeight':
							value += fuelCFT
						if key == 'fuelCapacity':
							value = float(value)
							value *= (fuelCFT + (vehicle_config[config_dict['fuelWeight']])) / (vehicle_config[config_dict['fuelWeight']])
							value = effNum(value)

					if key in line:
						line = re.sub(r'\d', '', line)
						line = line.replace('.', '')

						line = line.replace(';', f'{value};')

				if idx0 < 0:
					if 'thrustCoef[]' in line:
						idx0 = idx + 1
				else:
					if len(thrustCoef) > idx - idx0:
						line = re.sub(r'\d', '', line)
						line = line.replace('.', '')
						line = line.replace(',', '')

						line = line.replace('\n', f'{thrustCoef[idx - idx0]},\n')
						if len(thrustCoef) - 1 == idx - idx0:
							line = line.replace(',', '')
					else:
						pass

				lines[idx] = line

		with open(f'addons/{dir}/config/{file}', 'w') as f:
			f.writelines(lines)
