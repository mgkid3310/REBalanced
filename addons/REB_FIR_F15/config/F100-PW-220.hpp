		fuelCapacity = 746.3080;
		thrustCoef[] = {
			1.60650521,
			1.459245492,
			1.394350609,
			1.397013219,
			1.45242598,
			1.545781549,
			1.662272584,
			1.787091744,
			1.905431687,
			2.00248507,
			2.063444551,
			2.073502789,
			2.01785244,
			1.881686164,
			1.650196618,
			1.30857646,
			0.842373237,
			0.237740103,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 106.0; //kN per engine
			milThrust = 65.3; //kN per engine
			abThrust = 106.6; //kN per engine
			abFuelMultiplier = 4.6729;

			grossWeight = 20185;
			zfWeight = 12701;
			fuelWeight = 6103;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816};
		};
