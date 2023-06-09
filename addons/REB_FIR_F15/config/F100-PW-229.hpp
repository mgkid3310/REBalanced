		fuelCapacity = 1295.1251;
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
			refThrust = 129.4; //kN per engine
			milThrust = 79.2; //kN per engine
			abThrust = 129.4; //kN per engine
			abFuelMultiplier = 4.6388;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "5448 / 10591";
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", "1816 / 10591"};
		};
