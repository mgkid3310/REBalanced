		fuelCapacity = 746.3080;
		thrustCoef[] = {
			1.545087236,
			1.489841197,
			1.473978473,
			1.490549067,
			1.532602982,
			1.593190222,
			1.665360790,
			1.742164689,
			1.816651923,
			1.881872494,
			1.930876406,
			1.956713662,
			1.952434266,
			1.911088221,
			1.825725529,
			1.689396195,
			1.495150222,
			1.236037613,
			0.905108370,
			0.495412498,
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
