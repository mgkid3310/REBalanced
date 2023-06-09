#include "script_component.hpp"

params ["_vehicle"];

private _fuelInternal = fuel _vehicle;
private _handle = [_vehicle] execVM "FIR_FA18\sqs\Jettison\droptanks.sqf";

waitUntil {scriptDone _handle};
_vehicle setFuel _fuelInternal;
