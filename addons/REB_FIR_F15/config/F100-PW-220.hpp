		fuelCapacity = 746.3080;
		thrustCoef[] = {
			1.348889670,
			1.227557509,
			1.172100583,
			1.171041960,
			1.212904708,
			1.286211897,
			1.379486595,
			1.481251871,
			1.580030794,
			1.664346432,
			1.722721854,
			1.743680128,
			1.715744324,
			1.627437510,
			1.467282755,
			1.223803128,
			0.885521697,
			0.443240465,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 106.0; //kN per engine
			milThrust = 65.3; //kN per engine
			abThrust = 106.6; //kN per engine
			abFuelMultiplier = 4.6729;

			grossWeight = 20185;
			zfWeight = 12701;
			fuelWeight = 6103;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = "5448 / 6103";
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", "1816 / 6103"};
		};
