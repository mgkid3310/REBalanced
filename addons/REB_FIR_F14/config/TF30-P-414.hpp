		fuelCapacity = 1131.1726;
		thrustCoef[] = {
			0.988577084,
			0.953229586,
			0.943080304,
			0.953682495,
			0.980589414,
			1.019354317,
			1.065530460,
			1.114671100,
			1.162329491,
			1.204058890,
			1.235412553,
			1.251943736,
			1.249205694,
			1.222751685,
			1.168134962,
			1.080908784,
			0.956626404,
			0.790841080,
			0.579106068,
			0.316974622,
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
