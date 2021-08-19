params ["_vehicle", "_fuelConsumption"];

private _fuelCurrentEXT = _vehicle getVariable ["AWESome_fuelEXT", 0];
_vehicle setVariable ["AWESome_fuelEXT", (_fuelCurrentEXT - _fuelConsumption) max 0, true];

(_fuelConsumption - _fuelCurrentEXT) min 0
