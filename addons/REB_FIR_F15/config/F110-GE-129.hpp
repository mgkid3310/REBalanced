		fuelCapacity = 1095;
		thrustCoef[] = {
			1.5932646167582225,
			1.5362959506404827,
			1.5199386108641018,
			1.5370258927806050,
			1.5803910917415174,
			1.6428675030983628,
			1.7172884222026672,
			1.7964871444059551,
			1.8732969650597509,
			1.9405511795155799,
			1.9910830831249673,
			2.0177259712394373,
			2.0133131392105152,
			1.9706778823897253,
			1.8826534961285940,
			1.7420732757786440,
			1.5417705166914006,
			1.2745785142183910,
			0.9333305637111365,
			0.5108599605211657,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 75.62; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.201;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5520;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1840, "FIR_F15E_Fueltank_P_1rnd_M", 1840};
		};
