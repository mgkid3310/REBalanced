#include "script_component.hpp"

GVAR(classNames) = ["FIR_F15_Base", "FIR_F15D_Base", "FIR_F15E_Base", "FIR_F15A_Base", "FIR_F15B_Base", "FIR_F15E_Demo_Base", "FIR_F15B_Civ_Base", "FIR_F15EX_Base", "FIR_F15SE_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];

["ECM_ON", ["ECM JAMMER ON", "Turn on ECM jammer"]] call REB_Common_fnc_addKeybind;
["Fueltank_Jettison", ["Jettison Fueltank", "Jettison Fueltank"]] call REB_Common_fnc_addKeybind;
