// class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F16_Base: Plane_Fighter_03_base_F { // Blk 50
		maxSpeed = 1850;
		fuelCapacity = 770.3335;
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
		aileronSensitivity = 0.980;
		rudderInfluence = 0.344;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.1, 0.04, 0.004};
		airFrictionCoefs2[] = {0.001, 0.004, 0.00004};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.8, 4.5, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		thrustCoef[] = {
			1.584931211,
			1.440279314,
			1.373278656,
			1.370443965,
			1.418289965,
			1.503331384,
			1.612082948,
			1.731059382,
			1.846775413,
			1.945745767,
			2.014485170,
			2.039508348,
			2.007330027,
			1.904464934,
			1.717427794,
			1.432733334,
			1.036896279,
			0.520802897,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.3, 0.8, 1.8, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		aileronCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		rudderCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};

		unitInfoType = "Rsc_REB_F16_UnitInfo";

		#include "CfgMFD.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_F16\functions\fnc_loadoutPreF16C.sqf";
			loadout_post = "REB_FIR_F16\functions\fnc_loadoutPostF16C.sqf";
			CustomFuelScript = "REB_FIR_F16\functions\fnc_loadoutFuelF16C.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F16\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers {
			class FIR_F16_EH {
				init = "_this call REB_FIR_F16_fnc_initF16C";
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
			refThrust = 124.6; //kN
			milThrust = 75.6; //kN
			abThrust = 124.6; //kN
			abFuelMultiplier = 4.8897;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "3150 / 3200";
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", "1120 / 3200", "FIR_F16C_center_Fueltank_P_1rnd_M", "910 / 3200"};
		};
	};
	class FIR_F16C: FIR_F16_Base { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_Standard: FIR_F16C { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_AV: FIR_F16C { // Blk 40 (510th & 555th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16C_ROKAF: FIR_F16C { // Blk 52
		#include "config\F100-PW-229.hpp"
	};
	class FIR_F16C_ROKAF_B32: FIR_F16C { // Blk 32
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F16C_ROKAF_Hess: FIR_F16C { // Blk 52
		#include "config\F100-PW-229.hpp"
	};
	class FIR_F16C_WW: FIR_F16C { // Blk 50 (13th FS)
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_Polish: FIR_F16C { // Blk 52
		#include "config\F100-PW-229.hpp"
	};
	class FIR_F16C_HG: FIR_F16C { // Blk 42 (122th FS)
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F16C_SW_HGV: FIR_F16C { // Blk 50 (77th FS)
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_WP: FIR_F16C { // Blk 40 (35th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16C_WP_Juvat: FIR_F16C { // Blk 40 (80th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16C_Osan: FIR_F16C { // Blk 40 (36th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16C_Makos: FIR_F16C { // Blk 30 (93rd FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16C_HO_8FS: FIR_F16C { // Blk 40 (8th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16C_HO_311FS: FIR_F16C { // Blk 42 (311th FS)
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F16C_HO_49WG: FIR_F16C { // Blk 42, not certain (49th WG)
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F16C_Blank: FIR_F16C { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_Blank2: FIR_F16C { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_Blank3: FIR_F16C { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_MERC: FIR_F16C { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_Ag_arctic: FIR_F16C { // PW-220
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F16C_Ag_flanker: FIR_F16C { // PW-220
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F16C_Ag_lizard: FIR_F16C { // PW-220
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F16C_ENEMY_TYPE_A: FIR_F16C { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16C_CFTTEST: FIR_F16C { // not defined
		#include "config\F110-GE-129CFT.hpp"
	};
	class FIR_F16C_Polish_CFT : FIR_F16C_CFTTEST { // Blk 52+
		#include "config\F100-PW-229CFT.hpp"
	};

	class FIR_F16D_Base: Plane_Fighter_03_base_F { // Blk 50
		maxSpeed = 1850;
		fuelCapacity = 770.3335;
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
		aileronSensitivity = 0.980;
		rudderInfluence = 0.344;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.1, 0.04, 0.004};
		airFrictionCoefs2[] = {0.001, 0.004, 0.00004};
		draconicForceXCoef = 7.0;
		draconicForceYCoef = 1.1;
		draconicForceZCoef = 1.0;
		draconicTorqueXCoef[] = {4, 3.92, 3.8, 3.6, 3.36, 3.12, 3, 4, 7.6, 6, 4.8, 4, 3.6, 3.28, 3.2, 3.2, 3.2, 3.2, 3.2, 3.2};
		draconicTorqueYCoef[] = {6.8, 4.5, 0.5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		thrustCoef[] = {
			1.584931211,
			1.440279314,
			1.373278656,
			1.370443965,
			1.418289965,
			1.503331384,
			1.612082948,
			1.731059382,
			1.846775413,
			1.945745767,
			2.014485170,
			2.039508348,
			2.007330027,
			1.904464934,
			1.717427794,
			1.432733334,
			1.036896279,
			0.520802897,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.3, 0.8, 1.8, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		aileronCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		rudderCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};

		unitInfoType = "Rsc_REB_F16_UnitInfo";

		#include "CfgMFD.hpp"

		class AMSData {
			loadout_pre = "REB_FIR_F16\functions\fnc_loadoutPreF16D.sqf";
			loadout_post = "REB_FIR_F16\functions\fnc_loadoutPostF16D.sqf";
			CustomFuelScript = "REB_FIR_F16\functions\fnc_loadoutFuelF16D.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F16\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers {
			class FIR_F16_EH {
				init = "_this call REB_FIR_F16_fnc_initF16D";
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
			refThrust = 124.6; //kN
			milThrust = 75.6; //kN
			abThrust = 124.6; //kN
			abFuelMultiplier = 4.8897;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "3150 / 3200";
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", "1120 / 3200", "FIR_F16C_center_Fueltank_P_1rnd_M", "910 / 3200"};
		};
	};
	class FIR_F16D: FIR_F16D_Base { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16D_WP: FIR_F16D { // Blk 40 (80th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16D_WP_Fanton: FIR_F16D { // Blk 40 (35th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16D_Blank: FIR_F16D { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16D_Standard: FIR_F16D { // not defined
		#include "config\F110-GE-129.hpp"
	};
	class FIR_F16D_AV: FIR_F16D { // Blk 40 (510th & 555th FS)
		#include "config\F110-GE-100.hpp"
	};
	class FIR_F16D_ROKAF: FIR_F16D { // Blk 52
		#include "config\F100-PW-229.hpp"
	};
	class FIR_F16D_CFTTEST: FIR_F16D { // not defined
		#include "config\F110-GE-129CFT.hpp"
	};
	class FIR_F16D_Polish_CFT: FIR_F16D_CFTTEST { // Blk 52+
		#include "config\F100-PW-229CFT.hpp"
	};
};
