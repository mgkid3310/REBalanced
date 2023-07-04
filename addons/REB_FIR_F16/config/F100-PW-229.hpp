		fuelCapacity = 648.5614;
		thrustCoef[] = {
			1.584222736,
			1.527577371,
			1.511312860,
			1.528303170,
			1.571422269,
			1.633544123,
			1.707542698,
			1.786291962,
			1.862665882,
			1.929538425,
			1.979783556,
			2.006275244,
			2.001887456,
			1.959494157,
			1.871969314,
			1.732186896,
			1.533020868,
			1.267345198,
			0.928033852,
			0.507960797,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 129.4; // kN per Engine
			milThrust = 79.2; // kN per Engine
			abThrust = 129.4; // kN per Engine
			abFuelMultiplier = 4.6388;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
