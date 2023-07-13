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

private _unitInfo = uiNamespace getVariable ["HUD", ""];
private _internalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "fuelWeight");
private _maxExternalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");
private _maxExternalRatio = _maxExternalFuel / _internalFuel;

if (!(_unitInfo isEqualTo "") and (vehicle player isEqualTo _vehicle)) then {
	(_unitInfo displayctrl 9910) progressSetPosition ((_vehicle getVariable ["AWESome_fuelEXT", 0])/ _maxExternalRatio);
};
