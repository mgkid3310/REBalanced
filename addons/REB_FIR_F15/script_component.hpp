#define ADDON REB_FIR_F15

#define QUOTE(var) "var"

#define PATH(var) QUOTE(ADDON/var)
#define UIPATH(var) QUOTE(ADDON/ui/var)
#define GVAR(var) ADDON_var
#define FUNC(var) ADDON_fnc_var
#define PREP(var) FUNC(var) = compile preProcessFileLineNumbers PATH(functions/var.sqf)
