		fuelCapacity = 633.3703;
		thrustCoef[] = {
			1.381413888,
			1.268516467,
			1.230983356,
			1.253963819,
			1.322607121,
			1.422062524,
			1.537479294,
			1.654006695,
			1.756793991,
			1.830990446,
			1.861745324,
			1.834207889,
			1.733527406,
			1.544853139,
			1.253334352,
			0.844120309,
			0.302360274,
			0,
			0,
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
