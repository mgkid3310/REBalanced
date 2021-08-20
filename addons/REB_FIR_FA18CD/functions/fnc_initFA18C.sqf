params ["_vehicle"];

addMissionEventHandler ["EachFrame", {[] call REB_FIR_FA18CD_fnc_eachFrameHandlerFA18C}, [_vehicle]];

[_vehicle] execVM "\FIR_FA18\sqs\init\init.sqf";

private _fueltankCount = {_x == "FIR_FA18_Fueltank_P_1rnd_M"} count getPylonMagazines _vehicle;
_vehicle setFuel 1;
_vehicle setVariable ["AWESome_fuelEXT", _fueltankCount * 2310 / 4930];
