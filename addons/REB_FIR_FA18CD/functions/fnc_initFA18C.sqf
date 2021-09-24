params ["_vehicle"];

addMissionEventHandler ["EachFrame", {[] call REB_FIR_FA18CD_fnc_eachFrameHandlerFA18C}, [_vehicle]];

[_vehicle] execVM "\FIR_FA18\sqs\init\init.sqf";

_vehicle setFuel 1;
[_vehicle] call REB_FIR_FA18CD_fnc_initExternalFuel;
