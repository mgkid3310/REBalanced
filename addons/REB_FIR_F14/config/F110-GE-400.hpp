		fuelCapacity = 832.7552;
		thrustCoef[] = {
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
			2.048526580,
			2.015721706,
			1.911988995,
			1.723843172,
			1.437798963,
			1.040371095,
			0.520802897,
			0,
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
