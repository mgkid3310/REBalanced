#include "script_component.hpp"

params ["_vehicle"];

private _externalFuel = [_vehicle] call FUNC(getExternalCapacity);
private _maxExternalFuel = call compile getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");
_vehicle setVariable ["AWESome_fuelEXT", _externalFuel min _maxExternalFuel, true];
