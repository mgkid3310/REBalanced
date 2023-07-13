		fuelCapacity = 769.0;
		thrustCoef[] = {
			1.2335928394803006,
			1.1894845740619817,
			1.1768198245854347,
			1.1900497352962291,
			1.2236254504399350,
			1.2719981142621217,
			1.3296188710083587,
			1.3909388649242167,
			1.4504092402552637,
			1.5024811412470704,
			1.5416057121452071,
			1.5622340971952418,
			1.5588174406427455,
			1.5258068867332870,
			1.4576535797124370,
			1.3488086638257640,
			1.1937232833188376,
			0.9868485824372295,
			0.7226357054265065,
			0.3955357965322408,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 116.0; // kN per Engine
			milThrust = 74.73; // kN per Engine
			abThrust = 116.0; // kN per Engine
			abFuelMultiplier = 4.167;

			grossWeight = 27669;
			zfWeight = 19838;
			fuelWeight = 7350;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 1638;
			externalTank[] = {};

			codeIntercept[] = {"call REB_FIR_F14_fnc_variableWing"};
		};
