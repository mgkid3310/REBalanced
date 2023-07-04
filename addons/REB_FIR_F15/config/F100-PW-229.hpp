		fuelCapacity = 1073.2677;
		thrustCoef[] = {
			1.655857155,
			1.596650434,
			1.579650485,
			1.597409053,
			1.642477885,
			1.707408726,
			1.784753325,
			1.867063425,
			1.946890774,
			2.016787119,
			2.069304204,
			2.096993777,
			2.092407584,
			2.048097371,
			1.956614883,
			1.810511869,
			1.602340073,
			1.324651242,
			0.969997122,
			0.530929459,
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
