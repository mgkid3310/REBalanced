private _vehicle = vehicle Player;

_vehicle vehiclechat "Refueling..";

sleep 5;

_vehicle setFuel 1;
[_vehicle] call REB_FIR_FA18CD_fnc_initExternalFuel;

_vehicle vehiclechat "Refuel is Completed!";
