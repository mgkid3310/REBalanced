params ["_vehicle"];

planes = [];
{
	planes = planes + entities _x;
} forEach REB_FIR_F15_classNames;

{
	[_x] call REB_FIR_F15_eachFrameHandlerF15;
} forEach planes select {alive _x};
