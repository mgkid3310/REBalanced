#include "script_component.hpp"

GVAR(classNames) = ["FIR_F16_Base", "FIR_F16D_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];

["ECM_ON", "Turn on ECM"] call REB_Common_fnc_addKeybind;
["Fueltank_Jettison", "Jettison Fueltank"] call REB_Common_fnc_addKeybind;
