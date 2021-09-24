params ["_vehicle"];

addMissionEventHandler ["EachFrame", {[] call REB_FIR_F16_fnc_eachFrameHandlerF16}, [_vehicle]];

[_vehicle] execVM "\FIR_F16\sqs\init\init.sqf";

_vehicle setFuel 1;
[_vehicle] call REB_FIR_F16_fnc_initExternalFuel;
