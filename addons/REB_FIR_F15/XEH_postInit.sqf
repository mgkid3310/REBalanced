#include "script_component.hpp"

GVAR(classNames) = ["FIR_F15_Base"];

addMissionEventHandler ["EachFrame", {[] call FUNC(eachFrameHandler)}];
