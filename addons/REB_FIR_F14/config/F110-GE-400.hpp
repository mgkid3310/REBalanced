		fuelCapacity = 832.7552;
		thrustCoef[] = {
			1.233592839,
			1.379478925,
			1.320404042,
			1.330726153,
			1.394058032,
			1.494012454,
			1.614202191,
			1.738240019,
			1.849738712,
			1.932311043,
			1.969569787,
			1.945127719,
			1.842597611,
			1.645592240,
			1.337724377,
			0.902606799,
			0.326287874,
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
