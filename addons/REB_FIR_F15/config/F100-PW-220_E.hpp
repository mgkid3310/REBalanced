		fuelCapacity = 1295.1251;
		thrustCoef[] = {
			1.409882942,
			1.283064457,
			1.225099914,
			1.223993422,
			1.267749095,
			1.344371044,
			1.441863380,
			1.548230217,
			1.651475665,
			1.739603836,
			1.800618842,
			1.822524795,
			1.793325807,
			1.701025989,
			1.533629454,
			1.279140313,
			0.925562678,
			0.463282643,
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
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816};
		};
