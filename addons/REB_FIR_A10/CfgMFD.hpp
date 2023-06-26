class MFD {
	class HUD_1_Common {
		class Draw {
			class MachText_Dot {
				text = "";
			};
			class MachNumber {
				sourceScale = 0.002915;
				sourceLength = 1;
				sourcePrecision = 2;
				pos[] = {{0.09, 0.48}, 1};
				right[] = {{0.12, 0.48}, 1};
				down[] = {{0.09, 0.51}, 1};
			};
		};
	};
	class HUD_2_Metric {
		class Draw {
			class Airspeed_Number {
				sourceScale = 1.94384;
			};
			class Altitude_MSL_Number {
				sourceScale = 3.28;
			};
			class Altitude_AGL_Number {
				sourceScale = 3.28;
			};
			class Vertical_Speed_Number {
				sourceScale = 196.85;
			};
		};
	};
};
