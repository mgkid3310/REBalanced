execVM "FIR_F14\sqs\Loadout\F14_Loadout_Post.sqf";

vehicle player setFuel 1;
[vehicle player] call REB_FIR_F14_fnc_initExternalFuel;
