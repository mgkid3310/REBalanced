		fuelCapacity = 782.6268;
		thrustCoef[] = {
			1.297320543,
			1.174090329,
			1.123861472,
			1.132687272,
			1.186621029,
			1.271716043,
			1.374025615,
			1.479603046,
			1.574501635,
			1.644774682,
			1.676475489,
			1.655657355,
			1.568373580,
			1.400677465,
			1.138622311,
			0.768261417,
			0.277694287,
			0,
			0,
			0,
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
