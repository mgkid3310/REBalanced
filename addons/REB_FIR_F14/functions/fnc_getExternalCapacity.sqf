#include "script_component.hpp"

params ["_vehicle"];

if !(_vehicle animationPhase "fueltank_switch" > 0.9) exitWith {0};

private _internalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "fuelWeight");
private _maxExternalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");
private _maxExternalRatio = _maxExternalFuel / _internalFuel;

_maxExternalRatio
