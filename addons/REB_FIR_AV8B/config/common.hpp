		maxSpeed = 1000;
		landingAoa = 0.139626; // 8 deg
		landingSpeed = 260;
		vtol = 1;

		stallSpeed = 220;
		stallWarningTreshold = 0.12;
		altFullForce = 2000;
		altNoForce = 16000;

		airBrake = 1;
		flaps = 1;
		airBrakeFrictionCoef = 5.0;
		flapsFrictionCoef = 0.37;
		gearsUpFrictionCoef = 0.8;

		elevatorControlsSensitivityCoef = 4.0;
		aileronControlsSensitivityCoef = 4.0;
		rudderControlsSensitivityCoef = 2.0;
		wheelSteeringSensitivity = 1.4;
		elevatorSensitivity = 0.480;
		aileronSensitivity = 0.680;
		rudderInfluence = 0.240;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.01, 0.04, 0.012};
		airFrictionCoefs2[] = {0.001, 0.004, 0.000015};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6};
		draconicTorqueYCoef[] = {6.5, 3.0, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		angleOfIndicence = 0.0523599; // 3 deg
		envelope[] = {0, 0.3, 0.9, 1.8, 2.6, 3.2, 3.6, 3.8, 3.9, 3.7, 3.4};
		aileronCoef[] = {1, 1.6, 1.8, 1.88, 1.9, 1.85, 1.75, 1.6, 1.4, 1.2, 1.058};
		elevatorCoef[] = {1, 1.55, 1.7, 1.65, 1.55, 1.4, 1.2, 1, 0.8, 0.65, 0.55};
		rudderCoef[] = {1, 1.55, 1.7, 1.65, 1.55, 1.4, 1.2, 1, 0.8, 0.65, 0.55};

		unitInfoType = "Rsc_REB_AV8B_UnitInfo";

		#include "..\CfgMFD.hpp"

		class AMSData {
			CustomFuelEnabled = 1;
			CustomFuelScript = "REB_FIR_AV8B\functions\fnc_customFuelScript.sqf";
		};

		class UserActions {
			class Fueltank_Jettison {
				statement = "[this] spawn REB_FIR_AV8B_fnc_fueltankJettison";
			};
		};

		class EventHandlers {
			class REB_FIR_AV8B_EH {
				init = "_this spawn REB_FIR_AV8B_fnc_initVehicle";
			};
		};