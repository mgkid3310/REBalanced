		fuelCapacity = 633.3703;
		thrustCoef[] = {
			1.3814138876205933,
			1.3320201424093363,
			1.3178377799229360,
			1.3326530267393581,
			1.3702521094365703,
			1.4244212545925380,
			1.4889466887852283,
			1.5576146385926080,
			1.6242113305926424,
			1.6825229913632995,
			1.7263358474825450,
			1.7494361255283450,
			1.7456100520786673,
			1.7086438537114772,
			1.6323237570047422,
			1.5104359885364278,
			1.3367667748845005,
			1.1051023426269284,
			0.8092289183416759,
			0.4429327286067117,
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
