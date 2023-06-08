#include "script_component.hpp"

params ["_vehicle"];

waitUntil {alive _vehicle};
[_vehicle] call FUNC(customFuelScript);
