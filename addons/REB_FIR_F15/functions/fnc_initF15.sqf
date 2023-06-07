params ["_vehicle"];

// addMissionEventHandler ["EachFrame", {[] call REB_FIR_F15_fnc_eachFrameHandlerF15}, [_vehicle]];

waitUntil {alive _vehicle};
[] call REB_FIR_F15_fnc_customFuelScript;

while {alive _vehicle} do {
	[_vehicle] call REB_FIR_F15_fnc_eachFrameHandlerF15;

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
