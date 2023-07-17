		maxSpeed = 1000;
		landingAoa = 0.139626; // 8 deg
		landingSpeed = 260;

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
		wheelSteeringSensitivity = 2.1;
		elevatorSensitivity = 0.480;
		aileronSensitivity = 0.680;
		rudderInfluence = 0.240;

		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.01, 0.04, 0.008};
		airFrictionCoefs2[] = {0.001, 0.004, 0.00001};
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

		#include "..\CfgMFD.hpp"

		// maxOmega = 20000;
		/* class Wheels {
			class Wheel_1 {
				// mass = 1;
				// MOI = 1;
				dampingRate = 0;
				// dampingRateDamaged = 0.1;
				// dampingRateDestroyed = 0.1;
				maxBrakeTorque = 0;
				// maxHandBrakeTorque = 0;
				longitudinalStiffnessPerUnitGravity = 0;
			};
			class Wheel_2: Wheel_1 {};
			class Wheel_3: Wheel_2 {};
		}; */
