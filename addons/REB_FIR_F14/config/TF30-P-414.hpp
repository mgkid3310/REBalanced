		fuelCapacity = 1131.1726;
		thrustCoef[] = {
			0.988577084,
			1.227726070,
			1.154677182,
			1.147416488,
			1.191093253,
			1.270856741,
			1.371856215,
			1.479240941,
			1.578160182,
			1.653763202,
			1.691199266,
			1.675617637,
			1.592167581,
			1.450091849,
			1.196639291,
			0.816790470,
			0.295694651,
			0,
			0,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 93.0; // kN per Engine
			milThrust = 54.9; // kN per Engine
			abThrust = 93.0; // kN per Engine
			abFuelMultiplier = 6.8282;

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
