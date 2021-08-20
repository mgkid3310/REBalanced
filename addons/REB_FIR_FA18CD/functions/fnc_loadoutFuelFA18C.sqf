private _vehicle = vehicle Player;

_vehicle vehiclechat "Refueling..";

sleep 5;

private _fueltankCount = {_x == "FIR_FA18_Fueltank_P_1rnd_M"} count getPylonMagazines _vehicle;

_vehicle setFuel 1;
_vehicle setVariable ["AWESome_fuelEXT", _fueltankCount * 2310 / 4930];

_vehicle vehiclechat "Refuel is Completed!";
