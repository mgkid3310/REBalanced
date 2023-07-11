		fuelCapacity = 623.6033;
		thrustCoef[] = {
			2.1157723917440974,
			2.0175180720108750,
			1.9327461835953060,
			1.8590774739119210,
			1.7941326903752532,
			1.7355325803998336,
			1.6808978914001944,
			1.6278493707908670,
			1.5740077659863836,
			1.5169938244012764,
			1.4544282934500763,
			1.3839319205473157,
			1.3031254531075270,
			1.2096296385452405,
			1.1010652242749897,
			0.9750529577113052,
			0.8292135862687195,
			0.6611678573617646,
			0.4685365184049714,
			0.2489403168128729,
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

			maxExternalFuel = 4550;
			externalTank[] = {"FIR_AV8B_Fueltank_L_P_1rnd_M", 910, "FIR_AV8B_Fueltank_R_P_1rnd_M", 910};
		};
