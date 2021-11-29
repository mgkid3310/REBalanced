class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F14D_Base: Plane_Fighter_03_base_F {
		maxSpeed = 1850;
		fuelCapacity = 832.7552;
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
		wheelSteeringSensitivity = 6.0;
		elevatorSensitivity = 0.800;
		aileronSensitivity = 0.980;
		rudderInfluence = 0.344;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.01, 0.04, 0.0015};
		airFrictionCoefs2[] = {0.001, 0.004, 0.000015};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.8, 4.5, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		thrustCoef[] = { // F110-GE-400
			1.282628759,
			1.442304479,
			1.377087922,
			1.375796266,
			1.424944237,
			1.511046561,
			1.620617963,
			1.740173171,
			1.856226911,
			1.955293908,
			2.023888889,
			2.04852658,
			2.015721706,
			1.911988995,
			1.723843172,
			1.437798963,
			1.040371095,
			0.520802897,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.3, 0.8, 1.8, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {3, 2.94, 1.92, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		aileronCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		rudderCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};

		unitInfoType = "Rsc_REB_F14_UnitInfo";

		#include "CfgMFD_F14D.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_F14\functions\fnc_loadoutPreF14.sqf";
			loadout_post = "REB_FIR_F14\functions\fnc_loadoutPostF14.sqf";
			CustomFuelScript = "REB_FIR_F14\functions\fnc_loadoutFuelF14.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F14\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers: EventHandlers {
			class FIR_F14_EH {
				init = "_this spawn REB_FIR_F14_fnc_initF14";
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
			refThrust = 116.0; //kN
			milThrust = 74.7; //kN
			abThrust = 116.0; //kN
			abFuelMultiplier = 4.7384;

			grossWeight = 27669;
			zfWeight = 19838;
			fuelWeight = 7350;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "1600 / 7350";
			externalTank[] = {};

			codeIntercept[] = {"call REB_FIR_F14_fnc_variableWing"};
		};
	};

	class FIR_F14B_Base: FIR_F14D_Base {
		maxSpeed = 1850;
		fuelCapacity = 832.7552;
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
		wheelSteeringSensitivity = 6.0;
		elevatorSensitivity = 0.800;
		aileronSensitivity = 0.980;
		rudderInfluence = 0.344;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.01, 0.04, 0.0015};
		airFrictionCoefs2[] = {0.001, 0.004, 0.000015};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.8, 4.5, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		thrustCoef[] = { // F110-GE-400
			1.282628759,
			1.442304479,
			1.377087922,
			1.375796266,
			1.424944237,
			1.511046561,
			1.620617963,
			1.740173171,
			1.856226911,
			1.955293908,
			2.023888889,
			2.04852658,
			2.015721706,
			1.911988995,
			1.723843172,
			1.437798963,
			1.040371095,
			0.520802897,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.3, 0.8, 1.8, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {3, 2.94, 1.92, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		aileronCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		rudderCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};

		unitInfoType = "Rsc_REB_F14_UnitInfo";

		// #include "CfgMFD_F14A.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_F14\functions\fnc_loadoutPreF14.sqf";
			loadout_post = "REB_FIR_F14\functions\fnc_loadoutPostF14.sqf";
			CustomFuelScript = "REB_FIR_F14\functions\fnc_loadoutFuelF14.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F14\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers: EventHandlers {
			class FIR_F14_EH {
				init = "_this spawn REB_FIR_F14_fnc_initF14";
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
			refThrust = 116.0; //kN
			milThrust = 74.7; //kN
			abThrust = 116.0; //kN
			abFuelMultiplier = 4.7384;

			grossWeight = 27669;
			zfWeight = 19838;
			fuelWeight = 7350;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "1600 / 7350";
			externalTank[] = {};

			codeIntercept[] = {"call REB_FIR_F14_fnc_variableWing"};
		};
	};

	class FIR_F14A_Base: FIR_F14D_Base {
		maxSpeed = 1850;
		fuelCapacity = 1131.1726;
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
		wheelSteeringSensitivity = 6.0;
		elevatorSensitivity = 0.800;
		aileronSensitivity = 0.980;
		rudderInfluence = 0.344;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.01, 0.04, 0.0015};
		airFrictionCoefs2[] = {0.001, 0.004, 0.000015};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.8, 4.5, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		thrustCoef[] = { // TF30-P-414
			1.027873507,
			1.282398974,
			1.204838501,
			1.190405568,
			1.225861397,
			1.297967209,
			1.393484226,
			1.499173668,
			1.601796757,
			1.688114715,
			1.744888762,
			1.758880121,
			1.716850011,
			1.615866487,
			1.441555901,
			1.158393135,
			0.75313941,
			0.212555947,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.3, 0.8, 1.8, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {3, 2.94, 1.92, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		aileronCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		rudderCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};

		unitInfoType = "Rsc_REB_F14_UnitInfo";

		// #include "CfgMFD_F14A.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_F14\functions\fnc_loadoutPreF14.sqf";
			loadout_post = "REB_FIR_F14\functions\fnc_loadoutPostF14.sqf";
			CustomFuelScript = "REB_FIR_F14\functions\fnc_loadoutFuelF14.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F14\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers: EventHandlers {
			class FIR_F14_EH {
				init = "_this spawn REB_FIR_F14_fnc_initF14";
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
			refThrust = 93.0; //kN
			milThrust = 54.9; //kN
			abThrust = 93.0; //kN
			abFuelMultiplier = 6.8282;

			grossWeight = 27669;
			zfWeight = 19838;
			fuelWeight = 7350;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "1600 / 7350";
			externalTank[] = {};

			codeIntercept[] = {"call REB_FIR_F14_fnc_variableWing"};
		};
	};
};
