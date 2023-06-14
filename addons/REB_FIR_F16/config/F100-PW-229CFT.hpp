		fuelCapacity = 924.2000;
		thrustCoef[] = {
			1.647196366,
			1.506762903,
			1.445852679,
			1.450450640,
			1.506541734,
			1.600110908,
			1.717143110,
			1.843623288,
			1.965536389,
			2.068867360,
			2.139601149,
			2.163722704,
			2.127216972,
			2.016068900,
			1.816263437,
			1.513785529,
			1.094620124,
			0.544752170,
			0,
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
			fuelWeight = 4560;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
