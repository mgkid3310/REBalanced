		fuelCapacity = 777.3;
		thrustCoef[] = {
			1.2973205428437933,
			1.2509336338045847,
			1.2376146203180793,
			1.2515279914043884,
			1.2868382360836228,
			1.3377098433758938,
			1.3983073023013130,
			1.4627951018799916,
			1.5253377311320402,
			1.5800996790775703,
			1.6212454347366938,
			1.6429394871295210,
			1.6393463252761638,
			1.6046304381967325,
			1.5329563149113397,
			1.4184884444400951,
			1.2553913158031105,
			1.0378294180204986,
			0.7599672401123676,
			0.4159692710988317,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 106.0; // kN per Engine
			milThrust = 65.26; // kN per Engine
			abThrust = 106.0; // kN per Engine
			abFuelMultiplier = 4.641;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3190;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1135, "FIR_F16C_center_Fueltank_P_1rnd_M", 920};
		};
