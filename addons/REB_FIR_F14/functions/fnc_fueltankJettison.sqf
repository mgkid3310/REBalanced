#include "script_component.hpp"

params ["_vehicle"];

private _fuelInternal = fuel _vehicle;
private _handle = [_vehicle] execVM "FIR_F14\sqs\Jettison\droptanks.sqf";

waitUntil {scriptDone _handle};
_vehicle setFuel _fuelInternal;
