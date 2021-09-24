private _vehicle = vehicle Player;

private _clean_ary = ["FIR_Empty_P_1rnd_M", ""];
private _pylonlist = getPylonMagazines _vehicle;

_hp2 = _pylonlist select 1;
_hp3 = _pylonlist select 2;
_hp5 = _pylonlist select 4;
_hp7 = _pylonlist select 6;
_hp8 = _pylonlist select 7;

if (_hp2 in _clean_ary) then {
	_vehicle animate ["hp2_hide", 1, true];
};
if (_hp3 in _clean_ary) then {
	_vehicle animate ["hp3_hide", 1, true];
};
if (_hp5 in _clean_ary) then {
	_vehicle animate ["hp5_hide", 1, true];
};
if (_hp7 in _clean_ary) then {
	_vehicle animate ["hp7_hide", 1, true];
};
if (_hp8 in _clean_ary) then {
	_vehicle animate ["hp8_hide", 1, true];
};

_vehicle setFuel 1;
[_vehicle] call REB_FIR_FA18CD_fnc_initExternalFuel;

[_vehicle, "FIR_M61A2_578rnd_M", "FIR_M61A2_TWAS_412rnd_M"] execVM "FIR_AirWeaponSystem_US\Script\ATMS\ATMS_Init.sqf";

_vehicle vehiclechat "Loading is Completed!";

_vehicle setvariable ["Loadout_Status", "no", true];
