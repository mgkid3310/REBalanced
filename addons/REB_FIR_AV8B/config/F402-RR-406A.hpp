		fuelCapacity = 561.0191;
		thrustCoef[] = {
			1.906862093,
			1.818309355,
			1.741907800,
			1.675513101,
			1.616980933,
			1.564166968,
			1.514926881,
			1.467116345,
			1.418591033,
			1.367206619,
			1.310818777,
			1.247283180,
			1.174455503,
			1.090191418,
			0.992346599,
			0.878776720,
			0.747337455,
			0.595884476,
			0.422273459,
			0.224360075,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			grossWeight = 10410;
			zfWeight = 6340;
			fuelWeight = 3400;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_AV8B_Fueltank_L_P_1rnd_M", 910, "FIR_AV8B_Fueltank_R_P_1rnd_M", 910};
		};
