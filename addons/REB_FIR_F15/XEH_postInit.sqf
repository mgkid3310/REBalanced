#include "script_component.hpp"

GVAR(classNames) = ["FIR_F15_Base", "FIR_F15D_Base", "FIR_F15E_Base", "FIR_F15A_Base", "FIR_F15B_Base", "FIR_F15E_Demo_Base", "FIR_F15B_Civ_Base", "FIR_F15EX_Base", "FIR_F15SE_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];

["AMSOpen", ["Open AMS", "Open AMS"]] call CFUNC(addKeybind);
["Aircraft_MFD_Open_N", ["Open I-TGT", "Open I-TGT"]] call CFUNC(addKeybind);
["HMD_ON", ["HMD ON", "HMD ON"]] call CFUNC(addKeybind);
["HMD_OFF", ["HMD OFF", "HMD OFF"]] call CFUNC(addKeybind);
["Warhud_on", ["NV MODE - ON", "NV MODE - ON"]] call CFUNC(addKeybind);
["Warhud_OFF", ["NV MODE - OFF", "NV MODE - OFF"]] call CFUNC(addKeybind);
["ECM_ON", ["ECM JAMMER ON", "Turn on ECM jammer"]] call CFUNC(addKeybind);
["Fueltank_Jettison", ["Jettison Fueltank", "Jettison Fueltank"]] call CFUNC(addKeybind);
["Eject", ["Eject", "Activate Ejection Seat"]] call CFUNC(addKeybind);
