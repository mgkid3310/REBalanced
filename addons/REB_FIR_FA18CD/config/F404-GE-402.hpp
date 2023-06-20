		fuelCapacity = 633.3703;
		thrustCoef[] = {
			1.436325766,
			1.324834461,
			1.281380880,
			1.293744147,
			1.349703387,
			1.437037726,
			1.543526288,
			1.656948198,
			1.765082581,
			1.855708562,
			1.916605267,
			1.935551819,
			1.900327344,
			1.798710967,
			1.618481812,
			1.347419006,
			0.973301672,
			0.483908935,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 78.7; // kN per Engine
			milThrust = 53.2; // kN per Engine
			abThrust = 78.7; // kN per Engine
			abFuelMultiplier = 3.0214;

			grossWeight = 16769;
			zfWeight = 10443;
			fuelWeight = 4930;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3000;
			externalTank[] = {"FIR_FA18_Fueltank_P_1rnd_M", 1000};
		};
