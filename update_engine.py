import os, re, openpyxl

engine_profile = openpyxl.load_workbook('REB Engine Profile.xlsx', data_only = True)
thrust_data = engine_profile['Thrust']

vehicle_dict = {
	'GR.7A/9A': 'AV8B'
}

engine_dict = {
    'F-15E': {
        'F100-PW-220': 'F100-PW-220_E'
	}
}

def rightpad(string: str, length = 18, char = '0') -> str:
	string += max(length - len(string), 0) * char

	if float(string) == 0:
		return '0'

	return string[:length]

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
	if vehicle in vehicle_dict:
		vehicle = vehicle_dict[vehicle]

	vehicle = vehicle.upper()
	vehicle = vehicle.replace('-', '').replace('/', '')

	addons = [f[8:] for f in os.listdir('addons/') if 'preConfig' not in f]

	return f'REB_FIR_{find_match(vehicle, addons)}'

def get_value(row: int, col: int) -> str:
	if not col < len(thrust_data[row]):
		return ''

	if thrust_data[row][col].value is None:
		return ''

	return str(thrust_data[row][col].value)

def get_vehicle(row: int, col: int) -> str:
	return get_value(row * 30 + 1, col * 5)

def get_engine(row: int, col: int) -> str:
	return get_value(row * 30 + 2, col * 5)

def get_thrust(row: int, col: int, idx: int) -> str:
	return get_value(row * 30 + idx + 7, col * 5 + 1)

def get_thrustCoef(row: int, col: int) -> list:
	profile, idx = [], 0
	while get_thrust(row, col, idx) != '':
		profile.append(rightpad(get_thrust(row, col, idx)))
		idx += 1

	return profile

data = []
row, col = 0, 0
while get_vehicle(row, col) != '':
	while get_vehicle(row, col) != '':
		vehicle = get_vehicle(row, col)
		engine = get_engine(row, col)
		thrustCoef = get_thrustCoef(row, col)
		
		if vehicle in engine_dict:
			if engine in engine_dict[vehicle]:
				engine = engine_dict[vehicle][engine]

		data.append({
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

		engine = file[:-4]

		target = [d for d in data if d['addon'] == dir]
		config_engine = find_match(engine, [d['engine'] for d in target])
		
		if config_engine == '':
			print(f'no match for {engine}')
			continue

		target_config = [d for d in target if d['engine'] == config_engine][0]
		thrustCoef = target_config['thrustCoef']

		idx0 = -1
		with open(f'addons/{dir}/config/{file}', 'r') as f:
			lines = f.readlines()
			for idx, line in enumerate(lines):
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
