execVM "FIR_FA18\sqs\Loadout\FA18_Refuel.sqf";

vehicle player setFuel 1;
[vehicle player] call REB_FIR_FA18CD_fnc_initExternalFuel;
