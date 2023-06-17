#include "script_component.hpp"

params ["_vehicle", "_unitInfo"];

private _isNowAB = (_vehicle getVariable ["AWS_AB", "off"]) == "on";
private _abThrottle = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "abThrottle");
private _isThrottleAB = (airplaneThrottle _vehicle > _abThrottle) && (isEngineOn _vehicle);

if (_isNowAB isEqualTo _isThrottleAB) exitWith {};

if (!_isNowAB && _isThrottleAB) exitWith {
	if (local _vehicle) then {
		_vehicle setVariable ["AWS_AB", "on", true];
		[_vehicle] spawn FIR_fnc_AWS_Afterburner_Snd2;
		[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_start_script");
	};

	if (!(_unitInfo isEqualTo "") and (vehicle player isEqualTo _vehicle)) then {
		(_unitInfo displayCtrl 9908) ctrlSetText (QPATHUI(FA18_Toggles_AfterBurner_ON_ca.paa));
	};
};

if (_isNowAB && !_isThrottleAB) exitWith {
	if (local _vehicle) then {
		_vehicle setVariable ["AWS_AB", "off", true];
		[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");
	};

	if (!(_unitInfo isEqualTo "") and (vehicle player isEqualTo _vehicle)) then {
		(_unitInfo displayCtrl 9908) ctrlSetText (QPATHUI(FA18_Toggles_clear_ca.paa));
	};
};
