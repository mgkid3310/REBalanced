		fuelCapacity = 1073.2677;
		thrustCoef[] = {
			1.721678288,
			1.574894791,
			1.511230365,
			1.516036234,
			1.574663621,
			1.672463749,
			1.794787842,
			1.926987124,
			2.054412817,
			2.162416145,
			2.236348332,
			2.261560600,
			2.223404174,
			2.107230277,
			1.898390131,
			1.582234962,
			1.144115991,
			0.569384442,
			0,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 129.4; // kN per Engine
			milThrust = 79.2; // kN per Engine
			abThrust = 129.4; // kN per Engine
			abFuelMultiplier = 4.6388;

			grossWeight = 23000;
			zfWeight = 14379;
			fuelWeight = 10591;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 5448;
			externalTank[] = {"FIR_F15C_Fueltank_P_1rnd_M", 1816};
		};
