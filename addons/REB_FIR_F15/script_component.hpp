#define ADDON REB_FIR_F15

#define QUOTE(var) "var"
#define QPATH(var) QUOTE(ADDON/var)

#define QPATHUI(var) QUOTE(ADDON/ui/var)
#define GVAR(var) ADDON_var
#define FUNC(var) ADDON_fnc_var
#define PREP(var) FUNC(var) = compile preProcessFileLineNumbers QPATH(functions/var.sqf)
