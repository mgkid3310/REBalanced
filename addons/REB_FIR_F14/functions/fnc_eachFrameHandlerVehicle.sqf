#include "script_component.hpp"

params ["_vehicle"];

if (local _vehicle) then {
	private _externalCapacity = [_vehicle] call FUNC(getExternalCapacity);
	private _externalFuel = _vehicle getVariable ["AWESome_fuelEXT", 0];

	if (_externalFuel > _externalCapacity) then {
		_externalFuel = _externalCapacity;
		_vehicle setVariable ["AWESome_fuelEXT", _externalFuel, true];
	};
};

if !([player, _vehicle] call orbis_main_fnc_isCrew) exitWith {};

private _unitInfo = uiNamespace getVariable ["HUD", ""];
private _isHookLowered = _vehicle animationPhase "tailhook" > 0.1;
private _internalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "fuelWeight");
private _maxExternalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");
private _maxExternalRatio = _maxExternalFuel / _internalFuel;

if !(_unitInfo isEqualTo "") then {
	(_unitInfo displayCtrl 9907) ctrlSetText format [QPATHUI(FA18_Toggles_%1_ca.paa), ["clear", "TailHook_ON"] select _isHookLowered];
	(_unitInfo displayctrl 9910) progressSetPosition ((_vehicle getVariable ["AWESome_fuelEXT", 0])/ _maxExternalRatio);
};

[_vehicle, _unitInfo] call FUNC(checkEngineAB);
