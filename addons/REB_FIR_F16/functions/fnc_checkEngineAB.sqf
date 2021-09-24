params ["_vehicle", "_unitInfo"];

private _isNowAB = (_vehicle animationPhase "ABSwitch") > 0.9;
private _abThrottle = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "abThrottle");
private _isThrottleAB = (airplaneThrottle _vehicle > _abThrottle) && (isEngineOn _vehicle);

if !(alive _vehicle) exitWith {
	removeMissionEventHandler ["EachFrame", _thisEventHandler];
	if (_isNowAB) then {
		_vehicle animate ["ABSwitch", 0];
		[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");

		(_unitInfo displayCtrl 9908) ctrlSetText "REB_FIR_F16\ui\FA18_Toggles_clear_ca.paa";
	};
};

if (_isNowAB isEqualTo _isThrottleAB) exitWith {};

if (!_isNowAB && _isThrottleAB) exitWith {
	_vehicle animate ["ABSwitch", 1];
	[_vehicle] spawn FIR_fnc_AWS_Afterburner_Snd;
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_start_script");

	(_unitInfo displayCtrl 9908) ctrlSetText "REB_FIR_F16\ui\FA18_Toggles_AfterBurner_ON_ca.paa";
};

if (_isNowAB && !_isThrottleAB) exitWith {
	_vehicle animate ["ABSwitch", 0];
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");

	(_unitInfo displayCtrl 9908) ctrlSetText "REB_FIR_F16\ui\FA18_Toggles_clear_ca.paa";
};
