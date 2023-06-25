		maxSpeed = 2000;
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
		elevatorSensitivity = 0.520;
		aileronSensitivity = 0.960;
		rudderInfluence = 0.360;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.01, 0.04, 0.008};
		airFrictionCoefs2[] = {0.001, 0.004, 0.00001};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.5, 3.0, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0, 0.3, 0.9, 1.8, 2.6, 3.2, 3.6, 3.8, 3.9, 3.7, 3.4, 3, 2.7, 2.5, 2.45, 2.4, 2.4, 2.4, 2.4, 2.4, 2.4};
		aileronCoef[] = {1, 1.6, 1.8, 1.88, 1.9, 1.85, 1.75, 1.6, 1.4, 1.2, 1.05, 0.92, 0.85, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8, 0.8};
		elevatorCoef[] = {1, 1.55, 1.7, 1.65, 1.55, 1.4, 1.2, 1, 0.8, 0.65, 0.55, 0.5, 0.48, 0.46, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45};
		rudderCoef[] = {1, 1.55, 1.7, 1.65, 1.55, 1.4, 1.2, 1, 0.8, 0.65, 0.55, 0.5, 0.48, 0.46, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45, 0.45};

		unitInfoType = "Rsc_REB_F16_UnitInfo";

		#include "..\CfgMFD.hpp"

		class AMSData {
			CustomFuelEnabled = 1;
			CustomFuelScript = "REB_FIR_F16\functions\fnc_customFuelScript.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F16\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers {
			class REB_FIR_F16_EH {
				init = "_this spawn REB_FIR_F16_fnc_initVehicle";
			};
		};
