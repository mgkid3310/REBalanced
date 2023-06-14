#include "script_component.hpp"

private _action = param [0, ""];
private _name = param [1, ""];

if !(isClass (configFile >> "CfgVehicles" >> (typeOf vehicle player) >> "UserActions" >> _action)) exitWith {};

private _code = compile format ["['%1'] call %2", _action, QCFUNC(runUserAction)];
["REBalanced FIR Keybind", format ["REB_Keybind_%1", _action], [_name, _name], _code] call CBA_fnc_addKeybind;
