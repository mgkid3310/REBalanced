params ["_vehicle"];

if (_vehicle animationPhase "fueltank_switch" < 0.9) exitWith {0};

call compile getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel")
