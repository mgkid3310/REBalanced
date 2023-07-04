		fuelCapacity = 1295.1251;
		thrustCoef[] = {
			1.355981993,
			1.307497589,
			1.293576325,
			1.308118822,
			1.345025704,
			1.398197593,
			1.461535111,
			1.528938880,
			1.594309524,
			1.651547665,
			1.694553924,
			1.717228925,
			1.713473290,
			1.677187641,
			1.602272600,
			1.482628791,
			1.312156836,
			1.084757357,
			0.794330976,
			0.434778316,
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
