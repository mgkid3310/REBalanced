#include "script_component.hpp"

GVAR(classNames) = ["FIR_F14D_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];
