		fuelCapacity = 633.3703;
		thrustCoef[] = {
			1.417300744,
			1.305311964,
			1.263792373,
			1.279678549,
			1.339907067,
			1.431414506,
			1.541137443,
			1.656012454,
			1.762976116,
			1.848965008,
			1.900915705,
			1.905764786,
			1.850448827,
			1.721904405,
			1.507068097,
			1.192876481,
			0.766266134,
			0.214173633,
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
