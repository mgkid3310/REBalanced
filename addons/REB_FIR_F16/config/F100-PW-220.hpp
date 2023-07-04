		fuelCapacity = 782.6268;
		thrustCoef[] = {
			1.297320543,
			1.250933634,
			1.237614620,
			1.251527991,
			1.286838236,
			1.337709843,
			1.398307302,
			1.462795102,
			1.525337731,
			1.580099679,
			1.621245435,
			1.642939487,
			1.639346325,
			1.604630438,
			1.532956315,
			1.418488444,
			1.255391316,
			1.037829418,
			0.759967240,
			0.415969271,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 106.0; // kN per Engine
			milThrust = 65.3; // kN per Engine
			abThrust = 106.0; // kN per Engine
			abFuelMultiplier = 4.6729;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
