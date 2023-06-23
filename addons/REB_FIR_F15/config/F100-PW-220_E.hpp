		fuelCapacity = 1295.1251;
		thrustCoef[] = {
			1.355981993,
			1.227179631,
			1.174679556,
			1.183904435,
			1.240276936,
			1.329219725,
			1.436155469,
			1.546506836,
			1.645696491,
			1.719147103,
			1.752281337,
			1.730521861,
			1.639291342,
			1.464012446,
			1.190107842,
			0.803000194,
			0.290250899,
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
			abThrust = 106.6; // kN per Engine
			abFuelMultiplier = 4.6729;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816, "FIR_F15E_Fueltank_P_1rnd_M", 1816};
		};
