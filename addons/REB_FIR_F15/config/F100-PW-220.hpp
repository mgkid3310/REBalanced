		fuelCapacity = 746.3080;
		thrustCoef[] = {
			1.545087236,
			1.398322096,
			1.338500361,
			1.349011742,
			1.413245951,
			1.514592701,
			1.636441704,
			1.762182671,
			1.875205316,
			1.958899349,
			1.996654483,
			1.971860431,
			1.867906904,
			1.668183615,
			1.356080275,
			0.914986597,
			0.330729288,
			0,
			0,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 106.0; // kN per Engine
			milThrust = 65.3; // kN per Engine
			abThrust = 106.6; // kN per Engine
			abFuelMultiplier = 4.6729;

			grossWeight = 20185;
			zfWeight = 12701;
			fuelWeight = 6103;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816, "FIR_F15E_Fueltank_P_1rnd_M", 1816};
		};
