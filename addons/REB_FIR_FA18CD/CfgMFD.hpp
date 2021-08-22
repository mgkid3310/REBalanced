class MFD: MFD {
	class HUD_1: HUD_1 {
		class Bones: Bones {
			class RadarAltitudeBone: RadarAltitudeBone {
				sourceScale = 3.28;
			};
		};
		class Draw: Draw {
			class Speed_Scale_Top: Speed_Scale_Top {
				clipTL[]={0, 0};
				clipBR[]={1, 0.395};
				class speed_scale: speed_scale {
					sourceScale = 1.852;
					step = -10;
					StepSize = 0.02;
					majorLineEach = 5;
					numberEach = 5;
				};
			};
			class Speed_Scale_Right: Speed_Scale_Right {
				clipTL[]={0.165, 0.395};
				clipBR[]={1, 0.475};
				class speed_scale: speed_scale {
					sourceScale = 1.852;
					step = -10;
					StepSize = 0.02;
					majorLineEach = 5;
					numberEach = 5;
				};
			};
			class Speed_Scale_Bottom: Speed_Scale_Bottom {
				clipTL[]={0, 0.475};
				clipBR[]={1, 1};
				class speed_scale: speed_scale {
					sourceScale = 1.852;
					step = -10;
					StepSize = 0.02;
					majorLineEach = 5;
					numberEach = 5;
				};
			};
			class SpeedNumber: SpeedNumber {
				sourceScale = 1.852;
			};
			class Altitude_Scale_Top: Altitude_Scale_Top {
				clipTL[]={0, 0};
				clipBR[]={1, 0.395};
				class altitude_scale: altitude_scale {
					sourceScale = 3.28;
					step = 100;
					StepSize = 0.02;
					majorLineEach = 5;
					numberEach = 5;
				};
			};
			class Altitude_Scale_Left: Altitude_Scale_Left {
				clipTL[]={0, 0.395};
				clipBR[]={0.835, 0.475};
				class altitude_scale: altitude_scale {
					sourceScale = 3.28;
					step = 100;
					StepSize = 0.02;
					majorLineEach = 5;
					numberEach = 5;
				};
			};
			class Altitude_Scale_Bottom: Altitude_Scale_Bottom {
				clipTL[]={0, 0.475};
				clipBR[]={1, 1};
				class altitude_scale: altitude_scale {
					sourceScale = 3.28;
					step = 100;
					StepSize = 0.02;
					majorLineEach = 5;
					numberEach = 5;
				};
			};
			class Altitude_ASL_Number: Altitude_ASL_Number {
				sourceScale = 3.28;
			};
			class Raltitude_number: Raltitude_number {
				sourceScale = 3.28;
			};
			class Climb_number: Climb_number {
				sourceScale = 196.85;
			};
		};
	};
	class HUD_Horizon: HUD_Horizon {
		class Bones: Bones {
			class VelocityVector_B {
				type = "vector";
				source = "velocity";
				pos0[] = {0.50000, "0.26+0.183"};
				pos10[] = {0.81, "0.76+0.183"};
			};
		};
		class Draw: Draw {
			class PlaneMovementCrosshair: PlaneMovementCrosshair {
				class TVV: TVV {
					/* points[] = {
						{"VelocityVector_B", {0.015000, 0.000000}, 1},
						{"VelocityVector_B", {0.014095, 0.004104}, 1},
						{"VelocityVector_B", {0.011491, 0.007713}, 1},
						{"VelocityVector_B", {0.007500, 0.010392}, 1},
						{"VelocityVector_B", {0.002605, 0.011818}, 1},
						{"VelocityVector_B", {-0.002605, 0.011818}, 1},
						{"VelocityVector_B", {-0.007500, 0.010392}, 1},
						{"VelocityVector_B", {-0.011491, 0.007713}, 1},
						{"VelocityVector_B", {-0.014095, 0.004104}, 1},
						{"VelocityVector_B", {-0.015000, 0.000000}, 1},
						{"VelocityVector_B", {-0.014095, -0.004104}, 1},
						{"VelocityVector_B", {-0.011491, -0.007713}, 1},
						{"VelocityVector_B", {-0.007500, -0.010392}, 1},
						{"VelocityVector_B", {-0.002605, -0.011818}, 1},
						{"VelocityVector_B", {0.002605, -0.011818}, 1},
						{"VelocityVector_B", {0.007500, -0.010392}, 1},
						{"VelocityVector_B", {0.011491, -0.007713}, 1},
						{"VelocityVector_B", {0.014095, -0.004104}, 1},
						{"VelocityVector_B", {0.015000, -0.000000}, 1},
						{},
						{"VelocityVector_B", {0.0150000, 0.000000}, 1},
						{"VelocityVector_B", {0.060000, 0.000000}, 1},
						{},
						{"VelocityVector_B", {-0.0150000, 0.000000}, 1},
						{"VelocityVector_B", {-0.060000, 0.000000}, 1},
						{},
						{"VelocityVector_B", {0.000000, -0.0120000}, 1},
						{"VelocityVector_B", {0.000000, -0.050000}, 1}
					};*/ 
				};
			};
		};
	};
	class HMCS_ALL: HMCS_ALL {
		class Draw: Draw {
			class SpeedNumber: SpeedNumber {
				sourceScale = 1.852;
			};
			class MachText_Dot: MachText_Dot {
				text = "";
			};
			class MachNumber: MachNumber {
				sourceScale = 0.00288;
				sourceLength = 1;
				sourcePrecision = 2;
				pos[] = {{0.09, 0.48}, 1};
				right[] = {{0.12, 0.48}, 1};
				down[] = {{0.09, 0.51}, 1};
			};
			class AltNumber: SpeedNumber {
				sourceScale = 3.28;
			};
			class RadarAltitude_Number: RadarAltitude_Number {
				sourceScale = 3.28;
			};
		};
	};
};
