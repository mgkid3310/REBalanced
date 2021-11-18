class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_FA18_Base: Plane_Fighter_03_base_F {
		maxSpeed = 1900;
		fuelCapacity = 633.3703;
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
			1.417300744,
			1.305311964,
			1.263792373,
			1.279678549,
			1.339907067,
			1.431414506,
			1.541137443,
			1.656012454,
			1.762976116,
			1.848965008,
			1.900915705,
			1.905764786,
			1.850448827,
			1.721904405,
			1.507068097,
			1.192876481,
			0.766266134,
			0.214173633,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.4, 0.6, 1.5, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {0.9, 0.882, 0.570, 0.27, 0.252, 0.234, 0.225, 0.3, 0.57, 0.45, 0.36, 0.3, 0.27, 0.246, 0.24, 0.24, 0.24, 0.24, 0.24, 0.24};
		aileronCoef[] = {0.4, 0.392, 0.38, 0.36, 0.336, 0.312, 0.3, 0.4, 0.76, 0.58, 0.48, 0.4, 0.352, 0.328, 0.32, 0.32, 0.32, 0.32, 0.32, 0.32};
		rudderCoef[] = {0.6, 0.588, 0.57, 0.54, 0.504, 0.468, 0.45, 0.6, 1.14, 0.9, 0.72, 0.6, 0.54, 0.492, 0.48, 0.48, 0.48, 0.48, 0.48, 0.48};

		unitInfoType = "Rsc_REB_FA18CD_UnitInfo";

		#include "CfgMFD.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_FA18CD\functions\fnc_loadoutPreFA18C.sqf";
			loadout_post = "REB_FIR_FA18CD\functions\fnc_loadoutPostFA18C.sqf";
			CustomFuelScript = "REB_FIR_FA18CD\functions\fnc_loadoutFuelFA18C.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_FA18CD\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers: EventHandlers {
			class FIR_FA18C_EH {
				init = "_this call REB_FIR_FA18CD_fnc_initFA18C";
			};
		};

		class UserActions {
			class Afterburner {
				condition = "false";
			};
			class Afterburner_1 {
				condition = "false";
			};
			class ECM_ON {
				shortcut = "User2";
			};
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 157.4; //kN
			milThrust = 106.4; //kN
			abThrust = 157.4; //kN
			abFuelMultiplier = 3.0214;

			grossWeight = 16769;
			zfWeight = 10443;
			fuelWeight = 4930;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "3000 / 4930";
			externalTank[] = {"FIR_FA18_Fueltank_P_1rnd_M", "1000 / 4930"};
		};
	};

	class FIR_FA18D_Base: Plane_Fighter_03_base_F {
		maxSpeed = 1900;
		fuelCapacity = 633.3703;
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
			1.406605218, // 0km/h
			1.295461551, // 142.5km/h
			1.254255284,
			1.270021576,
			1.329795586,
			1.420612472,
			1.529507395,
			1.643515513,
			1.749671984,
			1.835011969,
			1.886570625,
			1.891383113,
			1.836484590,
			1.708910216,
			1.495695151,
			1.183874552,
			0.760483579,
			0.212557392, // 2422.5km/h
			0,
			0 // 2705.5km/h
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.4, 0.6, 1.5, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {0.9, 0.882, 0.570, 0.27, 0.252, 0.234, 0.225, 0.3, 0.57, 0.45, 0.36, 0.3, 0.27, 0.246, 0.24, 0.24, 0.24, 0.24, 0.24, 0.24};
		aileronCoef[] = {0.4, 0.392, 0.38, 0.36, 0.336, 0.312, 0.3, 0.4, 0.76, 0.58, 0.48, 0.4, 0.352, 0.328, 0.32, 0.32, 0.32, 0.32, 0.32, 0.32};
		rudderCoef[] = {0.6, 0.588, 0.57, 0.54, 0.504, 0.468, 0.45, 0.6, 1.14, 0.9, 0.72, 0.6, 0.54, 0.492, 0.48, 0.48, 0.48, 0.48, 0.48, 0.48};

		unitInfoType = "Rsc_REB_FA18CD_UnitInfo";

		/* class Wheels {
			class Wheel_1 {
				// mass = 80;
				// MOI = 30;
				// dampingRate = 0.25;
				// dampingRateDamaged = 1;
				// dampingRateDestroyed = 1000;
				// maxBrakeTorque = 1500;
				maxCompression = 0.0;
				maxDroop = 0.6;
				sprungMass = 4000;
				// springStrength = 250000;
				// springDamperRate = 70000;
			};
			class Wheel_2: Wheel_1 {
				// mass = 80;
				// MOI = 30;
				// dampingRate = 0.25;
				// dampingRateDamaged = 1;
				// dampingRateDestroyed = 1000;
				// maxBrakeTorque = 1500;
				maxCompression = 0.2;
				maxDroop = 0.6;
				sprungMass = 4250;
				// springStrength = 370000;
				// springDamperRate = 88000;
			};
			class Wheel_3: Wheel_2 {};
		}; */

		#include "CfgMFD.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_FA18CD\functions\fnc_loadoutPreFA18C.sqf";
			loadout_post = "REB_FIR_FA18CD\functions\fnc_loadoutPostFA18C.sqf";
			CustomFuelScript = "REB_FIR_FA18CD\functions\fnc_loadoutFuelFA18C.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_FA18CD\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers: EventHandlers {
			class FIR_FA18C_EH {
				init = "_this call REB_FIR_FA18CD_fnc_initFA18C";
			};
		};

		class UserActions {
			class Afterburner {
				condition = "false";
			};
			class Afterburner_1 {
				condition = "false";
			};
			class ECM_ON {
				shortcut = "User2";
			};
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 157.4; //kN
			milThrust = 106.4; //kN
			abThrust = 157.4; //kN
			abFuelMultiplier = 3.0214;

			grossWeight = 16769;
			zfWeight = 10443;
			fuelWeight = 4930;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "3000 / 4930";
			externalTank[] = {"FIR_FA18_Fueltank_P_1rnd_M", "1000 / 4930"};
		};
	};
};
