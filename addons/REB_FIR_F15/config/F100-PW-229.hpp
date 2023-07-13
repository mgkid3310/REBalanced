		fuelCapacity = 1073;
		thrustCoef[] = {
			1.6558571552737240,
			1.5966504344156442,
			1.5796504848623345,
			1.5974090528541285,
			1.6424778846313626,
			1.7074087264343698,
			1.7847533245034860,
			1.8670634250790460,
			1.9468907744013835,
			2.0167871187108344,
			2.0693042042477336,
			2.0969937772524148,
			2.0924075839652136,
			2.0480973706264645,
			1.9566148834765027,
			1.8105118687556618,
			1.6023400727042770,
			1.3246512415626850,
			0.9699971215712170,
			0.5309294589702114,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 129.4; // kN per Engine
			milThrust = 79.18; // kN per Engine
			abThrust = 129.4; // kN per Engine
			abFuelMultiplier = 4.639;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5520;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1840, "FIR_F15E_Fueltank_P_1rnd_M", 1840};
		};
