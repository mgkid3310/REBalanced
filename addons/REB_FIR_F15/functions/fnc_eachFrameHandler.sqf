#include "script_component.hpp"

params ["_vehicle"];

planes = [];
{
	planes = planes + entities _x;
} forEach GVAR(classNames);

{
	[_x] call FUNC(eachFrameHandlerF15);
} forEach planes select {alive _x};
