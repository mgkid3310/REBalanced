		fuelCapacity = 677.7091;
		thrustCoef[] = {
			1.524338028,
			1.469833896,
			1.454184195,
			1.470532260,
			1.512021427,
			1.571795032,
			1.642996411,
			1.718768899,
			1.792255832,
			1.856600546,
			1.904946377,
			1.930436661,
			1.926214734,
			1.885423931,
			1.801207588,
			1.666709041,
			1.475071626,
			1.219438678,
			0.892953534,
			0.488759530,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 124.6; // kN per Engine
			milThrust = 73.8; // kN per Engine
			abThrust = 124.6; // kN per Engine
			abFuelMultiplier = 4.4625;

			grossWeight = 12020;
			zfWeight = 8573;
			fuelWeight = 3200;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 3150;
			externalTank[] = {"FIR_F16C_Fueltank_P_1rnd_M", 1120, "FIR_F16C_center_Fueltank_P_1rnd_M", 910};
		};
