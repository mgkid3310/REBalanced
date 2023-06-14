		fuelCapacity = 770.3335;
		thrustCoef[] = {
			1.584931211,
			1.440279314,
			1.373278656,
			1.370443965,
			1.418289965,
			1.503331384,
			1.612082948,
			1.731059382,
			1.846775413,
			1.945745767,
			2.014485170,
			2.039508348,
			2.007330027,
			1.904464934,
			1.717427794,
			1.432733334,
			1.036896279,
			0.520802897,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 75.6; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.8897;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
