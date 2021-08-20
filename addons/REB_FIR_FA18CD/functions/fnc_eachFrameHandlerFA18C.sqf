_thisArgs params ["_vehicle"];

if !(local _vehicle) exitWith {};

private _unitInfo = uiNamespace getVariable ["HUD", nil];
private _isHookLowered = _vehicle animationPhase "tailhook" > 0.1;

(_unitInfo displayCtrl 9907) ctrlSetText format ["js_jc_FA18\ui\FA18_Toggles_%1_ca.paa", ["clear", "TailHook_ON"] select _isHookLowered];
(_unitInfo displayctrl 9910) progressSetPosition ((_vehice getVariable ["AWESome_fuelEXT", 0]) * 4930 / 6930);

[_vehicle, _unitInfo] call REB_FIR_FA18CD_fnc_checkEngineAB;
