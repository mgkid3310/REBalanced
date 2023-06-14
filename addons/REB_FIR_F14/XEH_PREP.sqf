PREP(checkEngineAB);
PREP(customFuelScript);
PREP(eachFrameHandler);
PREP(eachFrameHandlerVehicle);
PREP(fueltankJettison);
PREP(getExternalCapacity);
PREP(initExternalFuel);
PREP(initVehicle);
PREP(variableWing);

REB_Common_fnc_runUserAction = {
	private _action = param [0, ""];
	private _config = (configFile >> "CfgVehicles" >> (typeOf vehicle player) >> "UserActions" >> _action);

	if !(isClass _config) exitWith {};

	if (call compile getText (_config >> "condition")) then {
		call compile getText (_config >> "statement");
	};
};

REB_Common_fnc_addKeybind = {
	private _action = param [0, ""];
	private _name = param [1, ""];

	if !(isClass (configFile >> "CfgVehicles" >> (typeOf vehicle player) >> "UserActions" >> _action)) exitWith {};

	private _code = compile format ["[%1] call REB_Common_fnc_runUserAction", _action];
	["REBalanced FIR Keybind", format ["REB_Keybind_%1", _action], [_name, _name], _code] call CBA_fnc_addKeybind;
};
