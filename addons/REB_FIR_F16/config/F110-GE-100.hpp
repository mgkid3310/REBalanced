		fuelCapacity = 677.7091;
		thrustCoef[] = {
			1.584931211,
			1.440127472,
			1.372993047,
			1.370042663,
			1.417791045,
			1.502752921,
			1.611443015,
			1.730376054,
			1.846066764,
			1.945029872,
			2.013780103,
			2.038832184,
			2.006700841,
			1.903900799,
			1.716946785,
			1.432353526,
			1.036705739,
			0.520802897,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 73.8; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.4625;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
