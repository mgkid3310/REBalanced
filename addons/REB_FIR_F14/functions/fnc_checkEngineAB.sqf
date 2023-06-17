#include "script_component.hpp"

params ["_vehicle", "_unitInfo"];

private _ABSwitch = getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ABSwitchName");
private _isNowAB = (_vehicle animationPhase _ABSwitch) > 0.9;
private _abThrottle = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "abThrottle");
private _isThrottleAB = (airplaneThrottle _vehicle > _abThrottle) && (isEngineOn _vehicle);

if !(local _vehicle) exitWith {_isNowAB};
if (_isNowAB isEqualTo _isThrottleAB) exitWith {_isNowAB};

if (_isThrottleAB) then {
	_vehicle animate [_ABSwitch, 1, true];
	[_vehicle, _ABSwitch] spawn FIR_fnc_AWS_Afterburner_Snd;
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_start_script");
} else {
	_vehicle animate [_ABSwitch, 0, true];
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");
};

_isNowAB
