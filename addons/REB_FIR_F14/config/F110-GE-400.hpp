		fuelCapacity = 832.7552;
		thrustCoef[] = {
			1.233592839,
			1.189484574,
			1.176819825,
			1.190049735,
			1.223625450,
			1.271998114,
			1.329618871,
			1.390938865,
			1.450409240,
			1.502481141,
			1.541605712,
			1.562234097,
			1.558817441,
			1.525806887,
			1.457653580,
			1.348808664,
			1.193723283,
			0.986848582,
			0.722635705,
			0.395535797,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 116.0; // kN per Engine
			milThrust = 74.7; // kN per Engine
			abThrust = 116.0; // kN per Engine
			abFuelMultiplier = 4.7384;

			grossWeight = 27669;
			zfWeight = 19838;
			fuelWeight = 7350;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 1600;
			externalTank[] = {};

			codeIntercept[] = {"call REB_FIR_F14_fnc_variableWing"};
		};
