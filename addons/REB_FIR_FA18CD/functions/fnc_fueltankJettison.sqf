params ["_vehicle"];

_vehicle setVariable ["REB_externalFuel", 0];

[_vehicle] execVM "FIR_FA18\sqs\Jettison\droptanks.sqf";
