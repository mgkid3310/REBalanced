		fuelCapacity = 1274.7816;
		thrustCoef[] = {
			1.656597666,
			1.505404987,
			1.435374734,
			1.432411866,
			1.482421338,
			1.571308108,
			1.684977134,
			1.809333372,
			1.93028178,
			2.033727315,
			2.105574934,
			2.131729595,
			2.098096254,
			1.99057987,
			1.795085398,
			1.497517798,
			1.083782024,
			0.544352245,
			0,
			0
		};

		class AWESome_ConfigData {
			refThrust = 124.6; //kN
			milThrust = 75.6; //kN
			abThrust = 124.6; //kN
			abFuelMultiplier = 4.8897;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816};
		};
