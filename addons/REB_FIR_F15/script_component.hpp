#define ADDON REB_FIR_F15

#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define QUOTE(var1) #var1

#define QPATH(var1) QUOTE(ADDON\var1)

#define QPATHUI(var1) QUOTE(ADDON\ui\var1)
#define QPATHFUNC(var1) QUOTE(ADDON\functions\var1)

#define GVAR(var1) DROUBLES(ADDON,var1)
#define FUNC(var1) TRIPLES(ADDON,fnc,var1)
#define PREP(var1) FUNC(var1) = compile preProcessFileLineNumbers QPATHFUNC(var1.sqf)
