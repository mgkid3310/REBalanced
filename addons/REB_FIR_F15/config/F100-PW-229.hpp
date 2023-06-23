		fuelCapacity = 1073.2677;
		thrustCoef[] = {
			1.655857155,
			1.506931718,
			1.450101571,
			1.467565606,
			1.541522716,
			1.654171793,
			1.787711730,
			1.924341419,
			2.046259753,
			2.135665625,
			2.174757925,
			2.145735548,
			2.030797386,
			1.812142330,
			1.471969274,
			0.992477110,
			0.355864731,
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

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816, "FIR_F15E_Fueltank_P_1rnd_M", 1816};
		};
