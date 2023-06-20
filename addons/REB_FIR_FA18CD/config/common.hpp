		maxSpeed = 1900;
		brakeDistance = 400;
		landingSpeed = 260;
		landingAoa = "rad 12.7";

		stallSpeed = 220;
		stallWarningTreshold = 0.12;
		altFullForce = 2000;
		altNoForce = 16000;

		airBrake = 1;
		flaps = 1;
		airBrakeFrictionCoef = 2.5;
		flapsFrictionCoef = 0.37;
		gearsUpFrictionCoef = 0.8;

		elevatorControlsSensitivityCoef = 4.0;
		aileronControlsSensitivityCoef = 4.0;
		rudderControlsSensitivityCoef = 2.0;
		wheelSteeringSensitivity = 1.4;
		elevatorSensitivity = 0.540;
		aileronSensitivity = 0.880;
		rudderInfluence = 0.344;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.1, 0.04, 0.004};
		airFrictionCoefs2[] = {0.001, 0.004, 0.00004};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.8, 4.5, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		angleOfIndicence = -0.0523599; // 3deg
		envelope[] = {0.0, 0.4, 0.6, 1.5, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {2, 1.96, 1.44, 0.94, 0.92, 0.91, 0.9, 1.15, 2.25, 1.7, 1.4, 1.25, 1.08, 1.03, 1.01, 1, 1, 1, 1, 1};
		aileronCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.15, 2.25, 1.7, 1.4, 1.25, 1.08, 1.03, 1.01, 1, 1, 1, 1, 1};
		rudderCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.15, 2.25, 1.7, 1.4, 1.25, 1.08, 1.03, 1.01, 1, 1, 1, 1, 1};

		unitInfoType = "Rsc_REB_FA18CD_UnitInfo";

		#include "..\CfgMFD.hpp"

		class AMSData {
			CustomFuelEnabled = 1;
			CustomFuelScript = "REB_FIR_FA18CD\functions\fnc_customFuelScript.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_FA18CD\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers {
			class REB_FIR_FA18CD_EH {
				init = "_this spawn REB_FIR_FA18CD_fnc_initVehicle";
			};
		};

		class UserActions {
			class ECM_ON {
				shortcut = "User2";
			};
		};
