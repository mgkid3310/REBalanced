#include "script_component.hpp"

GVAR(classNames) = ["FIR_F14D_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];

["AMSOpen", ["Open AMS", "Open AMS"]] call REB_Common_fnc_addKeybind;
["Aircraft_MFD_Open_N", ["Open I-TGT", "Open I-TGT"]] call REB_Common_fnc_addKeybind;
["HMD_ON", ["HMD ON", "HMD ON"]] call REB_Common_fnc_addKeybind;
["HMD_OFF", ["HMD OFF", "HMD OFF"]] call REB_Common_fnc_addKeybind;
["Warhud_on", ["NV MODE - ON", "NV MODE - ON"]] call REB_Common_fnc_addKeybind;
["Warhud_OFF", ["NV MODE - OFF", "NV MODE - OFF"]] call REB_Common_fnc_addKeybind;
["ECM_ON", ["ECM JAMMER ON", "Turn on ECM jammer"]] call REB_Common_fnc_addKeybind;
["Fueltank_Jettison", ["Jettison Fueltank", "Jettison Fueltank"]] call REB_Common_fnc_addKeybind;
["Eject", ["Eject", "Activate Ejection Seat"]] call REB_Common_fnc_addKeybind;
