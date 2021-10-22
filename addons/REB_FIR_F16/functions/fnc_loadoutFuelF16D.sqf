execVM "FIR_F16D\sqs\Loadout\F16_Refuel.sqf";

vehicle player setFuel 1;
[vehicle player] call REB_FIR_F16_fnc_initExternalFuel;
