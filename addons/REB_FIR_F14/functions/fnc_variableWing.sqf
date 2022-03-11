private _modelPhase = linearConversion [190, 280, speed vehicle player / 3.6, 0, 1, true];
// private _targetPhase = linearConversion [140, 280, speed vehicle player / 3.6, 0, 1, true];
// private _actualPhase = _targetPhase max _modelPhase;

// _vehicle animate ["Leftwing_Parking", _actualPhase - _modelPhase, true];
// _vehicle animate ["Rightwing_Parking", _actualPhase - _modelPhase, true];

_liftMultiplier = _liftMultiplier * linearConversion [0, 1, _modelPhase, 1, 0.6, true];
_dragMultiplier = _dragMultiplier * linearConversion [0, 1, _modelPhase, 1, 0.8, true];

// diag_log str [_liftMultiplier, _dragMultiplier];
