		fuelCapacity = 770.3335;
		thrustCoef[] = {
			1.578778672,
			1.426575684,
			1.363501287,
			1.372582996,
			1.436848327,
			1.539324796,
			1.663039919,
			1.791021213,
			1.906296193,
			1.991892376,
			2.030837277,
			2.006158413,
			1.900883300,
			1.698039454,
			1.380654391,
			0.933486615,
			0.337941013,
			0,
			0,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 75.6; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.8897;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
