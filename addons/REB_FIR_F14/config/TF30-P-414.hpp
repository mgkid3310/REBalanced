		fuelCapacity = 1131.1726;
		thrustCoef[] = {
			1.027873507,
			1.285413277,
			1.207231006,
			1.189558079,
			1.220173619,
			1.286856753,
			1.377386605,
			1.479542300,
			1.581102963,
			1.669847719,
			1.733555693,
			1.760006009,
			1.736977793,
			1.652882528,
			1.517737265,
			1.284017617,
			0.939502708,
			0.471971663,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 93.0; // kN per Engine
			milThrust = 54.9; // kN per Engine
			abThrust = 93.0; // kN per Engine
			abFuelMultiplier = 6.8282;

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
