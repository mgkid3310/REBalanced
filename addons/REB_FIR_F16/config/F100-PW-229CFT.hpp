		fuelCapacity = 924.2000;
		thrustCoef[] = {
			1.584222736,
			1.441739996,
			1.387368391,
			1.404076911,
			1.474834545,
			1.582610284,
			1.710373119,
			1.841092040,
			1.957736037,
			2.043274100,
			2.080675220,
			2.052908386,
			1.942942590,
			1.733746822,
			1.408290071,
			0.949541328,
			0.340469584,
			0,
			0,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 129.4; // kN per Engine
			milThrust = 79.2; // kN per Engine
			abThrust = 129.4; // kN per Engine
			abFuelMultiplier = 4.6388;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 4560;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
