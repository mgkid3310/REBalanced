params ["_vehicle"];

// addMissionEventHandler ["EachFrame", {[] call REB_FIR_FA18CD_fnc_eachFrameHandlerFA18C}, [_vehicle]];

[] call REB_FIR_FA18CD_fnc_customFuelScript;

while {alive _vehicle} do {
	[_vehicle] call REB_FIR_FA18CD_fnc_eachFrameHandlerFA18CD;

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
