#include "script_component.hpp"

params ["_vehicle"];

private _internalFuel = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "fuelWeight");
private _externalTank = getArray (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "externalTank");
private _externalTankList = [];
while {count _externalTank > 1} do {
	_externalTankList pushBack [_externalTank deleteAt 0, _externalTank deleteAt 0];
};

private _externalFuel = 0;
private _pylonList = getPylonMagazines _vehicle;
{
	_x params ["_tankName", "_tankCapacity"];
	_externalFuel = _externalFuel + ({_x == _tankName} count _pylonList) * _tankCapacity / _internalFuel;
} forEach _externalTankList;

_externalFuel
