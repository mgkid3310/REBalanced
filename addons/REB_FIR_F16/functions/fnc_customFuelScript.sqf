#include "script_component.hpp"

private _vehicle = param [0, vehicle player];

if !(local _vehicle) exitWith {};

_vehicle setFuel 1;
[_vehicle] call FUNC(initExternalFuel);
