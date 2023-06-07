params ["_vehicle"];

// addMissionEventHandler ["EachFrame", {[] call REB_FIR_F14_fnc_eachFrameHandlerF14}, [_vehicle]];

waitUntil {alive _vehicle};
[] call REB_FIR_F14_fnc_customFuelScript;

while {alive _vehicle} do {
	[_vehicle] call REB_FIR_F14_fnc_eachFrameHandlerF14;

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
