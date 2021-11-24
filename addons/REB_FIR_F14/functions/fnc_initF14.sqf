params ["_vehicle"];

// addMissionEventHandler ["EachFrame", {[] call REB_FIR_F14_fnc_eachFrameHandlerF14}, [_vehicle]];

[_vehicle] execVM "\FIR_F14\sqs\init\init.sqf";
// [_vehicle] execVM "\FIR_AirWeaponSystem_US\Script\init\init.sqf";

_vehicle setFuel 1;
[_vehicle] call REB_FIR_F14_fnc_initExternalFuel;

while {alive _vehicle} do {
	[_vehicle] call REB_FIR_F14_fnc_eachFrameHandlerF14;

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
