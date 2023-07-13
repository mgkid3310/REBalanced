		fuelCapacity = 741.2;
		thrustCoef[] = {
			1.5450872355692242,
			1.4898411967630530,
			1.4739784727493996,
			1.4905490668001730,
			1.5326029821872824,
			1.5931902221826350,
			1.6653607900581406,
			1.7421646890857070,
			1.8166519225372428,
			1.8818724936846565,
			1.9308764057998575,
			1.9567136621547527,
			1.9524342660212521,
			1.9110882206712632,
			1.8257255293766959,
			1.6893961954094572,
			1.4951502220414554,
			1.2360376125446015,
			0.9051083701908009,
			0.4954124982519651,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 106.0; // kN per Engine
			milThrust = 65.26; // kN per Engine
			abThrust = 106.0; // kN per Engine
			abFuelMultiplier = 4.641;

			grossWeight = 20185;
			zfWeight = 12701;
			fuelWeight = 6103;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816, "FIR_F15E_Fueltank_P_1rnd_M", 1816};
		};
