		fuelCapacity = 770.3335;
		thrustCoef[] = {
			1.5787786715262282,
			1.5223279639250090,
			1.5061193449107977,
			1.5230512694388278,
			1.5660221924643336,
			1.6279305689425485,
			1.7016748538287068,
			1.7801535020780428,
			1.8562649686457902,
			1.9229077084871824,
			1.9729801765574540,
			1.9993808278118386,
			1.9950081172055710,
			1.9527604996938839,
			1.8655364302320125,
			1.7262343637751896,
			1.5277527552786496,
			1.2629900596976276,
			0.9248447319873548,
			0.5062152271030685,
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
