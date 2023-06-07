// class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F15_Base : Plane_Fighter_03_base_F {
		maxSpeed = 1850;
		fuelCapacity = 746.3080;
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
			1.585226056,
			1.305298895,
			1.263767836,
			1.279644142,
			1.339864393,
			1.431365164,
			1.541083033,
			1.655954576,
			1.762916372,
			1.848904997,
			1.900857028,
			1.905709042,
			1.850397617,
			1.72185933,
			1.507030757,
			1.192848476,
			0.766249064,
			0.214169098,
			0,
			0
		};
		angleOfIndicence = 0.0523599; // 3deg
		envelope[] = {0.0, 0.3, 0.8, 1.8, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		aileronCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};
		rudderCoef[] = {1, 0.98, 0.96, 0.94, 0.92, 0.91, 0.9, 1.02, 2.25, 1.8, 1.45, 1.25, 1.1, 1.05, 1.02, 1, 1, 1, 1, 1};

		unitInfoType = "Rsc_REB_F15_UnitInfo";

		#include "CfgMFD.hpp"

		class AMSData {
			CustomFuelEnabled = 1;
			CustomFuelScript = "REB_FIR_F15\functions\fnc_customFuelScript.sqf";
		};

		class JettisonSystem {
			JettisonScript = "REB_FIR_F15\functions\fnc_fueltankJettison.sqf";
			Fuel_Internal = 1;
		};

		class EventHandlers {
			class REB_FIR_F15 {
				init = "_this spawn REB_FIR_F15_fnc_initF15";
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
			refThrust = 106.6; //kN per engine
			milThrust = 65.3; //kN per engine
			abThrust = 106.6; //kN per engine
			abFuelMultiplier = 4.6729;

			grossWeight = 20185;
			zfWeight = 12701;
			fuelWeight = 6103;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "3150 / 6103";
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", "1120 / 6103", "FIR_F16C_center_Fueltank_P_1rnd_M", "910 / 6103"};
		};
	};
	class FIR_F16C: FIR_F15_Base { // not defined
		#include "config\F100-PW-229.hpp"
	};
};
