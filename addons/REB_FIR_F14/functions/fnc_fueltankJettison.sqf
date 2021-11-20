params ["_vehicle"];

_vehicle setVariable ["REB_externalFuel", 0];

[_vehicle] execVM "FIR_F14\sqs\Jettison\droptanks.sqf";
