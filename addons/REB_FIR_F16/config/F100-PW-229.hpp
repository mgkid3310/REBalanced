		fuelCapacity = 648.5614;
		thrustCoef[] = {
			1.5842227359108010,
			1.5275773706971640,
			1.5113128598932484,
			1.5283031703679268,
			1.5714222689900723,
			1.6335441226285570,
			1.7075426981522540,
			1.7862919624300357,
			1.8626658823307751,
			1.9295384247233447,
			1.9797835564766173,
			2.0062752444594650,
			2.0018874555407624,
			1.9594941565893795,
			1.8719693144741916,
			1.7321868960640694,
			1.5330208682278859,
			1.2673451978345156,
			0.9280338517528283,
			0.5079607968516998,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 129.4; // kN per Engine
			milThrust = 79.2; // kN per Engine
			abThrust = 129.4; // kN per Engine
			abFuelMultiplier = 4.6388;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
