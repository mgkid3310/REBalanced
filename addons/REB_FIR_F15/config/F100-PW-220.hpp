		fuelCapacity = 746.3080;
		thrustCoef[] = {
			1.606505210,
			1.462000620,
			1.395952341,
			1.394691539,
			1.444549377,
			1.531857023,
			1.642945640,
			1.764146395,
			1.881790453,
			1.982208978,
			2.051733137,
			2.076694094,
			2.043423015,
			1.938251065,
			1.747509410,
			1.457529215,
			1.054641644,
			0.527892038,
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
