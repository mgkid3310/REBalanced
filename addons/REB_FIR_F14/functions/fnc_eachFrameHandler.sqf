#include "script_component.hpp"

params ["_vehicle"];

planes = [];
{
	planes = planes + entities _x;
} forEach GVAR(classNames);

{
	[_x] call FUNC(eachFrameHandlerVehicle);
} forEach planes select {alive _x};
