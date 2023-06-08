params ["_vehicle"];

if (local _vehicle) then {
	private _externalCapacity = [_vehicle] call REB_FIR_F15_fnc_getExternalCapacity;
	private _externalFuel = _vehicle getVariable ["AWESome_fuelEXT", 0];

	if (_externalFuel > _externalCapacity) then {
		_externalFuel = _externalCapacity;
		_vehicle setVariable ["AWESome_fuelEXT", _externalFuel, true];
	};
};

if !([player, _vehicle] call orbis_main_fnc_isCrew) exitWith {};

private _unitInfo = uiNamespace getVariable ["HUD", ""];
private _isHookLowered = _vehicle animationPhase "tailhook" > 0.1;
private _maxExternalFuel = call compile getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");

if !(_unitInfo isEqualTo "") then {
	(_unitInfo displayCtrl 9907) ctrlSetText format [REB_FIR_F15_uiPath + "FA18_Toggles_%1_ca.paa", ["clear", "TailHook_ON"] select _isHookLowered];
	(_unitInfo displayctrl 9910) progressSetPosition (_vehicle getVariable ["AWESome_fuelEXT", 0] / _maxExternalFuel);
};

[_vehicle, _unitInfo] call REB_FIR_F15_fnc_checkEngineAB;
