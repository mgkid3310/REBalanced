		fuelCapacity = 1286;
		thrustCoef[] = {
			1.3559819934767299,
			1.3074975894200962,
			1.2935763248889838,
			1.3081188223200648,
			1.3450257041500124,
			1.3981975928154993,
			1.4615351107531984,
			1.5289388803997823,
			1.5943095241919236,
			1.6515476645662952,
			1.6945539239595700,
			1.7172289248084207,
			1.7134732895495204,
			1.6771876406195410,
			1.6022726004551566,
			1.4826287914930385,
			1.3121568361698600,
			1.0847573569222948,
			0.7943309761870136,
			0.4347783164006919,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 106.0; // kN per Engine
			milThrust = 65.26; // kN per Engine
			abThrust = 106.0; // kN per Engine
			abFuelMultiplier = 4.641;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816, "FIR_F15E_Fueltank_P_1rnd_M", 1816};
		};
