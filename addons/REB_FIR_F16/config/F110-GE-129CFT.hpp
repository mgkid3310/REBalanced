		fuelCapacity = 1097.7252;
		thrustCoef[] = {
			1.578778672,
			1.522327964,
			1.506119345,
			1.523051269,
			1.566022192,
			1.627930569,
			1.701674854,
			1.780153502,
			1.856264969,
			1.922907708,
			1.972980177,
			1.999380828,
			1.995008117,
			1.952760500,
			1.865536430,
			1.726234364,
			1.527752755,
			1.262990060,
			0.924844732,
			0.506215227,
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
			fuelWeight = 4560;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
