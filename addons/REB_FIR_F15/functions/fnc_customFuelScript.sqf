private _vehicle = param [0, vehicle player];

if !(local _vehicle) exitWith {};

_vehicle setFuel 1;
[_vehicle] call REB_FIR_F15_fnc_initExternalFuel;
