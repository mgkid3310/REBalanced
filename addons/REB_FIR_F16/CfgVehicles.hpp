class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F16_Base: Plane_Fighter_03_base_F {
		maxSpeed = 1900;
		fuelCapacity = 648.5614;
		acceleration = 200;
		brakeDistance = 400;
		landingSpeed = 260;
		landingAoa = "rad 12.7";

		stallSpeed = 220;
		stallWarningTreshold = 0.12;
		altNoForce = 16000;
		altFullForce = 2000;

		airBrake = 1;
		flaps = 1;
		airBrakeFrictionCoef = 2.5;
		flapsFrictionCoef = 0.37;
		gearsUpFrictionCoef = 0.8;

		elevatorControlsSensitivityCoef = 4.0;
		aileronControlsSensitivityCoef = 4.0;
		rudderControlsSensitivityCoef = 2.0;
		wheelSteeringSensitivity = 1.4;
		elevatorSensitivity = 1.8;
		aileronSensitivity = 1.8;
		rudderInfluence = 0.86;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.1, 0.04, 0.004};
		airFrictionCoefs2[] = {0.001, 0.004, 0.00004};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.8, 4.5, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		thrustCoef[] = {
			1.625378232,
			1.484210985,
			1.425418333,
			1.434018978,
			1.495031624,
			1.593474973,
			1.714367729,
			1.842728596,
			1.963576275,
			2.061929471,
			2.122806887,
			2.131227225,
			2.072209189,
			1.930771481,
			1.691932806,
			1.340711866,
			0.862127364,
			0.241198004,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.4, 0.6, 1.5, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {0.3, 0.294, 0.285, 0.27, 0.252, 0.234, 0.225, 0.3, 0.57, 0.45, 0.36, 0.3, 0.27, 0.246, 0.24, 0.24, 0.24, 0.24, 0.24, 0.24};
		aileronCoef[] = {0.4, 0.392, 0.38, 0.36, 0.336, 0.312, 0.3, 0.4, 0.76, 0.58, 0.48, 0.4, 0.352, 0.328, 0.32, 0.32, 0.32, 0.32, 0.32, 0.32};
		rudderCoef[] = {0.6, 0.588, 0.57, 0.54, 0.504, 0.468, 0.45, 0.6, 1.14, 0.9, 0.72, 0.6, 0.54, 0.492, 0.48, 0.48, 0.48, 0.48, 0.48, 0.48};

		unitInfoType = "Rsc_REB_F16_UnitInfo";

		#include "CfgMFD.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_F16\functions\fnc_loadoutPreFA18C.sqf";
			loadout_post = "REB_FIR_F16\functions\fnc_loadoutPostFA18C.sqf";
			CustomFuelScript = "REB_FIR_F16\functions\fnc_loadoutFuelFA18C.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F16\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers: EventHandlers {
			class FIR_FA18C_EH {
				init = "_this call REB_FIR_F16_fnc_initF16";
			};
		};

		class UserActions {
			class Afterburner {
				condition = "false";
			};
			class Afterburner_1 {
				condition = "false";
			};
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 129.4; //kN
			milThrust = 79.2; //kN
			abThrust = 129.4; //kN
			abFuelMultiplier = 4.6388;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "3 * 2310 / 4930";
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", "2310 / 4930", "FIR_F16C_center_Fueltank_P_1rnd_M", "0"};
		};
	};

	class FIR_F16D_Base: Plane_Fighter_03_base_F {};
};