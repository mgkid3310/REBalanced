params ["_vehicle"];

// addMissionEventHandler ["EachFrame", {[] call REB_FIR_F16_fnc_eachFrameHandlerF16}, [_vehicle]];

[_vehicle] execVM "\FIR_F16D\sqs\init\init.sqf";
[_vehicle] execVM "\FIR_AirWeaponSystem_US\Script\init\init.sqf";

_vehicle setFuel 1;
[_vehicle] call REB_FIR_F16_fnc_initExternalFuel;

while {alive _vehicle} do {
	[_vehicle] call REB_FIR_F16_fnc_eachFrameHandlerF16;

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
