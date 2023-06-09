// class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F15_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F15C: FIR_F15_Base {
		#include "config\F100-PW-220.hpp"
	};
};
