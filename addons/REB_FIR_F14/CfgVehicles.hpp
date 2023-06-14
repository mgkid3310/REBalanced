// class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F14D_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F110-GE-400.hpp"
		#include "CfgMFD_F14D.hpp"
	};

	class FIR_F14B_Base: FIR_F14D_Base {
		#include "config\F110-GE-400.hpp"
	};

	class FIR_F14A_Base: FIR_F14D_Base {
		#include "config\TF30-P-414.hpp"
	};
};
