#include "script_component.hpp"

params ["_vehicle"];

private _externalFuel = [_vehicle] call FUNC(getExternalCapacity);
private _internalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "fuelWeight");
private _maxExternalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");
private _maxExternalRatio = _maxExternalFuel / _internalFuel;
_vehicle setVariable ["AWESome_fuelEXT", _externalFuel min _maxExternalRatio, true];
