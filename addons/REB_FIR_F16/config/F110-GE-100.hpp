		fuelCapacity = 677.7;
		thrustCoef[] = {
			1.5243380276804959,
			1.4698338962034565,
			1.4541841950862873,
			1.4705322601478334,
			1.5120214272069425,
			1.5717950320824603,
			1.6429964105932340,
			1.7187688985581102,
			1.7922558317959347,
			1.8566005461255548,
			1.9049463773658175,
			1.9304366613355681,
			1.9262147338536544,
			1.8854239307389222,
			1.8012075878102190,
			1.6667090408863894,
			1.4750716257862821,
			1.2194386783287434,
			0.8929535343326183,
			0.4887595296167558,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 73.84; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.463;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
