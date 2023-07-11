// class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_AV8B_Base: Plane_Fighter_03_base_F { // AV-8B+
		#include "config\common.hpp"
		#include "config\F402-RR-408.hpp"
	};
	class FIR_AV8B_NA_Base: Plane_Fighter_03_base_F { // AV-8B
		#include "config\common.hpp"
		#include "config\F402-RR-406A.hpp"
	};
	class FIR_AV8B_GR7_Base: Plane_Fighter_03_base_F { // GR.7A, GR.9A
		#include "config\common.hpp"
		#include "config\Mk.107.hpp"
	};
};
