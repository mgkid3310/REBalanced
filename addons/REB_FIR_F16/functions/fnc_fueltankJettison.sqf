params ["_vehicle"];

_vehicle setVariable ["REB_externalFuel", 0];

[_vehicle] execVM "FIR_F16\sqs\Jettison\droptanks.sqf";
