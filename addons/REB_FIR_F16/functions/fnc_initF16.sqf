params ["_vehicle"];

// addMissionEventHandler ["EachFrame", {[] call REB_FIR_F16_fnc_eachFrameHandlerF16}, [_vehicle]];

[] call REB_FIR_F16_fnc_customFuelScript;

while {alive _vehicle} do {
	[_vehicle] call REB_FIR_F16_fnc_eachFrameHandlerF16;

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
