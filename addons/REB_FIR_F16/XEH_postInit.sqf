#include "script_component.hpp"

GVAR(classNames) = ["FIR_F16_Base", "FIR_F16D_Base"];

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
