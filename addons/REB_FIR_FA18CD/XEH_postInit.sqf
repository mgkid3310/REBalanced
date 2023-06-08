#include "script_component.hpp"

GVAR(classNames) = ["FIR_FA18_Base", "FIR_FA18D_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];
