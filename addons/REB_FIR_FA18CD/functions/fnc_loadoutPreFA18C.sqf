private _vehicle = vehicle Player;

_vehicle animate ["hp2_hide", 0, true];
_vehicle animate ["hp3_hide", 0, true];
_vehicle animate ["hp5_hide", 0, true];
_vehicle animate ["hp7_hide", 0, true];
_vehicle animate ["hp8_hide", 0, true];

_vehicle setVariable ["TGT_POD", "no", true];

{_vehicle removeMagazine _x} forEach magazines _vehicle;
{_vehicle removeWeapon _x} forEach weapons _vehicle;

{_vehicle removeWeaponGlobal getText (configFile >> "CfgMagazines" >> _x >> "pylonWeapon")} forEach getPylonMagazines _vehicle;

_vehicle vehiclechat "Loading weapon system - please wait";
_vehicle addweapon "FIR_MasterArm";

_vehicle addweapon "FIR_M61A2";
_vehicle addmagazine "FIR_M61A2_578rnd_M";

_vehicle addweapon "FIR_CMLauncher";
_vehicle addmagazine "FIR_240rnd_CMFlare_Chaff_Magazine";

sleep 0.3;
