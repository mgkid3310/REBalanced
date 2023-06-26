		fuelCapacity = 832.7552;
		thrustCoef[] = {
			1.233592839,
			1.116363493,
			1.06855628,
			1.076909599,
			1.128161848,
			1.209051425,
			1.306316728,
			1.406696154,
			1.496928101,
			1.563750968,
			1.593903152,
			1.57412305,
			1.491149062,
			1.331719584,
			1.082573014,
			0.730447751,
			0.264053234,
			0,
			0,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 116.0; // kN per Engine
			milThrust = 74.7; // kN per Engine
			abThrust = 116.0; // kN per Engine
			abFuelMultiplier = 4.7384;

			grossWeight = 27669;
			zfWeight = 19838;
			fuelWeight = 7350;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 1600;
			externalTank[] = {};

			codeIntercept[] = {"call REB_FIR_F14_fnc_variableWing"};
		};
