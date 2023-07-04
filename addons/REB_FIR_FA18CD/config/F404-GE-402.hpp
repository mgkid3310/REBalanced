		fuelCapacity = 633.3703;
		thrustCoef[] = {
			1.381413888,
			1.332020142,
			1.317837780,
			1.332653027,
			1.370252109,
			1.424421255,
			1.488946689,
			1.557614639,
			1.624211331,
			1.682522991,
			1.726335847,
			1.749436126,
			1.745610052,
			1.708643854,
			1.632323757,
			1.510435989,
			1.336766775,
			1.105102343,
			0.809228918,
			0.442932729,
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
