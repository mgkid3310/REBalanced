		fuelCapacity = 1131.1726;
		thrustCoef[] = {
			0.988577084,
			0.878593931,
			0.826318174,
			0.821122226,
			0.852378498,
			0.909459404,
			0.981737355,
			1.058584765,
			1.129374045,
			1.183477608,
			1.210267866,
			1.199117232,
			1.139398118,
			1.037724887,
			0.856347392,
			0.584517318,
			0.211607078,
			0,
			0,
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
