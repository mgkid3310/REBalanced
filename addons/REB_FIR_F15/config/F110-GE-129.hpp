		fuelCapacity = 1274.7816;
		thrustCoef[] = {
			1.593264617,
			1.536295951,
			1.519938611,
			1.537025893,
			1.580391092,
			1.642867503,
			1.717288422,
			1.796487144,
			1.873296965,
			1.940551180,
			1.991083083,
			2.017725971,
			2.013313139,
			1.970677882,
			1.882653496,
			1.742073276,
			1.541770517,
			1.274578514,
			0.933330564,
			0.510859961,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 75.6; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.8897;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816, "FIR_F15E_Fueltank_P_1rnd_M", 1816};
		};
