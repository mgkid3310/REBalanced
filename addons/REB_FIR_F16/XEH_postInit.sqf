#include "script_component.hpp"

GVAR(classNames) = ["FIR_F16_Base", "FIR_F16D_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];
