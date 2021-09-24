_thisArgs params ["_vehicle"];

if !(local _vehicle) exitWith {};

private _unitInfo = uiNamespace getVariable ["HUD", nil];
private _isHookLowered = _vehicle animationPhase "tailhook" > 0.1;
private _maxExternalFuel = call compile getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "AWESome_ConfigData" >> "maxExternalFuel");

(_unitInfo displayCtrl 9907) ctrlSetText format ["REB_FIR_FA18CD\ui\FA18_Toggles_%1_ca.paa", ["clear", "TailHook_ON"] select _isHookLowered];
(_unitInfo displayctrl 9910) progressSetPosition ((_vehicle getVariable ["AWESome_fuelEXT", 0]) / _maxExternalFuel);

[_vehicle, _unitInfo] call REB_FIR_FA18CD_fnc_checkEngineAB;
