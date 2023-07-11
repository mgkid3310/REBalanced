#include "script_component.hpp"

params ["_vehicle"];

waitUntil {alive _vehicle};
sleep 1;

[_vehicle] call FUNC(customFuelScript);
