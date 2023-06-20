		maxSpeed = 1850;
		brakeDistance = 400;
		landingSpeed = 260;
		landingAoa = "rad 12.7";

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
		elevatorSensitivity = 0.540;
		aileronSensitivity = 0.880;
		rudderInfluence = 0.344;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0, 0, 0};
		airFrictionCoefs2[] = {0.001, 0.004, 0.00004};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.5, 3.0, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0, 0.40, 0.80, 1, 1.4, 1.92, 2.8, 3.44, 3.8, 3.76, 3.56, 3.2, 3, 2.92, 2.84, 2.8, 2.76, 2.74, 2.72, 2.72, 2.72};
		elevatorCoef[] = {1, 1.6, 1.8, 1.7, 1.55, 1.4, 1.2, 1, 0.8, 0.65, 0.55, 0.5, 0.48, 0.46, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45};
		aileronCoef[] = {1, 1.6, 1.8, 1.7, 1.55, 1.4, 1.2, 1, 0.8, 0.65, 0.55, 0.5, 0.48, 0.46, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45};
		rudderCoef[] = {1, 1.6, 1.8, 1.7, 1.55, 1.4, 1.2, 1, 0.8, 0.65, 0.55, 0.5, 0.48, 0.46, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45};

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
