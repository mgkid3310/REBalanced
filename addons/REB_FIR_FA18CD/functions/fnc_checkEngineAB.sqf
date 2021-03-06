params ["_vehicle", "_unitInfo"];

private _isNowAB = (_vehicle getVariable ["AWS_AB", "off"]) == "on";
private _abThrottle = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "abThrottle");
private _isThrottleAB = (airplaneThrottle _vehicle > _abThrottle) && (isEngineOn _vehicle);

if !(alive _vehicle) exitWith {
	removeMissionEventHandler ["EachFrame", _thisEventHandler];
	if (_isNowAB) then {
		_vehicle setVariable ["AWS_AB", "off", true];
		[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");

		if !(_unitInfo isEqualTo "") then {
			(_unitInfo displayCtrl 9908) ctrlSetText "REB_FIR_FA18CD\ui\FA18_Toggles_clear_ca.paa";
		};
	};
};

if (_isNowAB isEqualTo _isThrottleAB) exitWith {};

if (!_isNowAB && _isThrottleAB) exitWith {
	_vehicle setVariable ["AWS_AB", "on", true];
	[_vehicle] spawn FIR_fnc_AWS_Afterburner_Snd2;
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_start_script");

	if !(_unitInfo isEqualTo "") then {
		(_unitInfo displayCtrl 9908) ctrlSetText "REB_FIR_FA18CD\ui\FA18_Toggles_AfterBurner_ON_ca.paa";
	};
};

if (_isNowAB && !_isThrottleAB) exitWith {
	_vehicle setVariable ["AWS_AB", "off", true];
	[_vehicle] execVM getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "ABSystem" >> "ab_end_script");

	if !(_unitInfo isEqualTo "") then {
		(_unitInfo displayCtrl 9908) ctrlSetText "REB_FIR_FA18CD\ui\FA18_Toggles_clear_ca.paa";
	};
};
