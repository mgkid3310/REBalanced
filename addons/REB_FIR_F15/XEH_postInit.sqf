REB_FIR_F15_uiPath = "REB_FIR_F15\ui";
REB_FIR_F15_classNames = ["FIR_F15_Base"];

addMissionEventHandler ["EachFrame", {[] call REB_FIR_F15_fnc_eachFrameHandler}];
