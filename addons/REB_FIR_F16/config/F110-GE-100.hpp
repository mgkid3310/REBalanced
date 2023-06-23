		fuelCapacity = 677.7091;
		thrustCoef[] = {
			1.524338028,
			1.377226304,
			1.316190087,
			1.324842151,
			1.386795270,
			1.485662219,
			1.605055772,
			1.728588702,
			1.839873783,
			1.922523791,
			1.960151500,
			1.936369682,
			1.834791113,
			1.639028567,
			1.332694818,
			0.901297421,
			0.326287874,
			0,
			0,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 73.8; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.4625;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
