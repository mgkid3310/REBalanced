_thisArgs params ["_vehicle"];

if !(player isEqualTo driver _vehicle) exitWith {};

private _unitInfo = uiNamespace getVariable ["HUD", nil];
private _isHookLowered = _vehicle animationPhase "tailhook" > 0.1;
private _maxExternalFuel = call compile getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");
private _externalCapacity = [_vehicle] call REB_FIR_F14_fnc_getExternalCapacity;
private _externalFuel = _vehicle getVariable ["AWESome_fuelEXT", 0];

if (_externalFuel > _externalCapacity) then {
	_externalFuel = _externalCapacity;
	_vehicle setVariable ["AWESome_fuelEXT", _externalFuel, true];
};

(_unitInfo displayCtrl 9907) ctrlSetText format ["REB_FIR_FA18CD\ui\FA18_Toggles_%1_ca.paa", ["clear", "TailHook_ON"] select _isHookLowered];
(_unitInfo displayctrl 9910) progressSetPosition (_externalFuel / _maxExternalFuel);

[_vehicle, _unitInfo] call REB_FIR_F14_fnc_checkEngineAB;
