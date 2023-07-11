#include "script_component.hpp"

private _action = param [0, ""];
private _config = (configFile >> "CfgVehicles" >> (typeOf vehicle player) >> "UserActions" >> _action);

if !(isClass _config) exitWith {};

private _condition = getText (_config >> "condition");
private _statement = getText (_config >> "statement");

_condition = [_condition, "this", true] call BIS_fnc_splitString;
_statement = [_statement, "this", true] call BIS_fnc_splitString;
_condition = _condition joinString "(vehicle player)";
_statement = _statement joinString "(vehicle player)";

if (call compile _condition) then {
	call compile _statement;
};
