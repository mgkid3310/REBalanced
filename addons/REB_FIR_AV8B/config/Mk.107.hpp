		fuelCapacity = 623.6033;
		thrustCoef[] = {
			2.115772392,
			2.017518072,
			1.932746184,
			1.859077474,
			1.794132690,
			1.735532580,
			1.680897891,
			1.627849371,
			1.574007766,
			1.516993824,
			1.454428293,
			1.383931921,
			1.303125453,
			1.209629639,
			1.101065224,
			0.975052958,
			0.829213586,
			0.661167857,
			0.468536518,
			0.248940317,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			grossWeight = 10410;
			zfWeight = 6340;
			fuelWeight = 3400;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_AV8B_Fueltank_L_P_1rnd_M", 910, "FIR_AV8B_Fueltank_R_P_1rnd_M", 910};
		};
