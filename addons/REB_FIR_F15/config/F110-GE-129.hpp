		fuelCapacity = 1095;
		thrustCoef[] = {
			1.6501669244995878,
			1.5911636631633570,
			1.5742221326806771,
			1.5919196746656268,
			1.6368336307322857,
			1.7015413424947330,
			1.7786201515670481,
			1.8606473995633104,
			1.9402004280975993,
			2.0098565787839937,
			2.0621931932365736,
			2.0897876130694170,
			2.0852171798966053,
			2.0410592353322157,
			1.9498911209903294,
			1.8042901784850240,
			1.5968337494303797,
			1.3200991754404763,
			0.9666637981293916,
			0.5291049591112073,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 129.0; // kN per Engine
			milThrust = 75.62; // kN per Engine
			abThrust = 129.0; // kN per Engine
			abFuelMultiplier = 4.351;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5520;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1840, "FIR_F15E_Fueltank_P_1rnd_M", 1840};
		};
