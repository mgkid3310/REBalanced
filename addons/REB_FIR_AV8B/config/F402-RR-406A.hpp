		fuelCapacity = 561.0191;
		thrustCoef[] = {
			1.9068620925592812,
			1.8183093548165234,
			1.7419077999209798,
			1.6755131014878446,
			1.6169809331323184,
			1.5641669684695980,
			1.5149268811148808,
			1.4671163446833653,
			1.4185910327902491,
			1.3672066190507302,
			1.3108187770800055,
			1.2472831804932740,
			1.1744555029057330,
			1.0901914179325800,
			0.9923465991890136,
			0.8787767202902310,
			0.7473374548514299,
			0.5958844764878087,
			0.4222734588145645,
			0.2243600754468960,
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

			maxExternalFuel = 3640;
			externalTank[] = {"FIR_AV8B_Fueltank_L_P_1rnd_M", 910, "FIR_AV8B_Fueltank_R_P_1rnd_M", 910};
		};
