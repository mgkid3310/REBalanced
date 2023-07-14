		fuelCapacity = 1077;
		thrustCoef[] = {
			0.9885770837859771,
			0.9532295858088734,
			0.9430803042114870,
			0.9536824949268095,
			0.9805894138878315,
			1.0193543170275439,
			1.0655304602789377,
			1.1146710995750049,
			1.1623294908487352,
			1.2040588900331204,
			1.2354125530611513,
			1.2519437358658188,
			1.2492056943801142,
			1.2227516845370280,
			1.1681349622695525,
			1.0809087835106774,
			0.9566264041933937,
			0.7908410802506939,
			0.5791060676155669,
			0.3169746222210058,
			0
		};

		class AWESome_ConfigData {
			enabled = 1;

			abThrottle = 0.9;
			refThrust = 92.97; // kN per Engine
			milThrust = 59.61; // kN per Engine
			abThrust = 92.97; // kN per Engine
			abFuelMultiplier = 5.846;

			grossWeight = 27669;
			zfWeight = 19838;
			fuelWeight = 7350;

			useExternalFuel = 1; // draw fuel from external tank to internal tank via AWESome
			getExternalFuel = "(_this select 0) getVariable ['AWESome_fuelEXT', 0]";
			setExternalFuel = "(_this select 0) setVariable ['AWESome_fuelEXT', (_this select 1), true]";

			maxExternalFuel = 1638;
			externalTank[] = {};

			codeIntercept[] = {"call REB_FIR_F14_fnc_variableWing"};
		};
