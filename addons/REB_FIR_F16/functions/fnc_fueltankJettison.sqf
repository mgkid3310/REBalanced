#include "script_component.hpp"

params ["_vehicle"];

_vehicle setVariable ["REB_externalFuel", 0];

[_vehicle] execVM "FIR_F15\sqs\Jettison\droptanks.sqf";
