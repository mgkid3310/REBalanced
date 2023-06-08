class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F16_Base: Plane_Fighter_03_base_F {
		delete draconicTorqueXCoef;
		delete draconicTorqueYCoef;

		class UserActions {
			delete Afterburner;
			delete Afterburner_1;
		};
	};

	class FIR_F16D_Base: Plane_Fighter_03_base_F {
		delete draconicTorqueXCoef;
		delete draconicTorqueYCoef;

		class UserActions {
			delete Afterburner;
			delete Afterburner_1;
		};
	};
};
