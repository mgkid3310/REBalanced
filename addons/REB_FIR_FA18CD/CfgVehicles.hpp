class Plane_Fighter_03_base_F;
class EventHandlers;
class FIR_FA18C_EH;

class CfgVehicles {
	class FIR_FA18_Base: Plane_Fighter_03_base_F {
		maxSpeed = 1900;
		landingSpeed = 260;
		landingAoa = "rad 12.7";
		fuelCapacity = 633.3703;
		acceleration = 300;

		stallSpeed = 220;
		stallWarningTreshold = 0.12;
		altNoForce = 16000;
		altFullForce = 2000;

		airBrake = 1;
		flaps = 1;
		airBrakeFrictionCoef = 2.5;
		flapsFrictionCoef = 0.37;
		gearsUpFrictionCoef = 0.8;

		elevatorControlsSensitivityCoef = 4;
		aileronControlsSensitivityCoef = 3.5;
		rudderControlsSensitivityCoef = 4;
		wheelSteeringSensitivity = 1.2;
		elevatorSensitivity = 1.4;
		aileronSensitivity = 1.4;
		rudderInfluence = 0.86;

		// airFrictionCoefs0[] = {0, 0, 0};
		// airFrictionCoefs1[] = {0.1, 0.05, 0.006};
		// airFrictionCoefs2[] = {0.001, 0.005, 0.00006};
		// draconicForceXCoef = 7;
		// draconicForceYCoef = 1.1;
		// draconicForceZCoef = 1;
		// draconicTorqueXCoef[] = {4, 5.1, 6.19, 7, 7.7, 8.3, 9, 9.1, 9.2, 9.2, 9.2};
		// draconicTorqueYCoef[] = {6.8, 5.5, 4, 1.5, 0.1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

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
		envelope[] = {0.0, 0.3, 0.6, 1.5, 3.0, 4.8, 7.0, 8.6, 9.5, 9.4, 8.9, 8.0, 7.5, 7.3, 7.1, 7.0, 6.9, 6.85, 6.8, 6.8}; // step 118.75km/h
		elevatorCoef[] = {0.0, 0.30, 0.38, 0.42, 0.53, 0.80, 0.59, 0.58, 0.55, 0.52, 0.50, 0.48, 0.44, 0.42, 0.3, 0.28};
		aileronCoef[] = {0.0, 0.11, 0.32, 0.72, 0.98, 1.05, 1.07, 1.08, 1.09, 1.09, 1.05, 1.02, 0.99, 0.80, 0.70, 0.60};
		rudderCoef[] = {0.0, 0.24, 1.3, 2.2, 2.3, 2.4, 2.5, 2.5, 2.6, 2.6, 2.4, 2.2, 2.0, 1.3, 1.15, 1.05};

		class EventHandlers: EventHandlers {
			class FIR_FA18C_EH: FIR_FA18C_EH {
				init = "_this call REB_FIR_FA18CD_fnc_initFA18C";
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
		};
	};

	class FIR_FA18D_Base: Plane_Fighter_03_base_F {};
};
