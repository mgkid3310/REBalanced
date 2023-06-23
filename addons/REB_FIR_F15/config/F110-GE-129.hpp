		fuelCapacity = 1274.7816;
		thrustCoef[] = {
			1.593264617,
			1.439665105,
			1.376011974,
			1.385177011,
			1.450032003,
			1.553448736,
			1.678298996,
			1.807454571,
			1.923787246,
			2.010168809,
			2.049471046,
			2.024565744,
			1.918324688,
			1.713619666,
			1.393322464,
			0.942051739,
			0.341041761,
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

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816, "FIR_F15E_Fueltank_P_1rnd_M", 1816};
		};
