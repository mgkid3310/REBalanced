_thisArgs params ["_vehicle"];

if !(local _vehicle) exitWith {};

private _isNowAB = _vehicle getVariable ["AWS_AB", false];
private _abThrottle = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "abThrottle");
private _isThrottleAB = (airplaneThrottle _vehicle > _abThrottle) && (isEngineOn _vehicle);

if !(alive _vehicle) exitWith {
	removeMissionEventHandler _thisEventHandler;
	if (_isNowAB) then {
		_vehicle setVariable ["AWS_AB", false, true];
		[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");
	};
};

if (_isNowAB isEqualTo _isThrottleAB) exitWith {};

if (!_isNowAB && _isThrottleAB) exitWith {
	_vehicle setVariable ["AWS_AB", true, true];
	[_vehicle] spawn FIR_fnc_AWS_Afterburner_Snd2;
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_start_script");
};

if (_isNowAB && !_isThrottleAB) exitWith {
	_vehicle setVariable ["AWS_AB", false, true];
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");
};
