// class EventHandlers;

class CfgVehicles {
	class Plane_Fighter_03_base_F;
	class FIR_F15_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F15D_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F15E_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F110-GE-129.hpp"
	};

	class FIR_F15K: FIR_F15E_Base {
		#include "config\F100-PW-229.hpp"
	};
	class FIR_F15K_1st: FIR_F15K {
		#include "config\F110-GE-129.hpp"
	};

	class FIR_F15E: FIR_F15E_Base {
		#include "config\F100-PW-229.hpp"
	};
	class FIR_F15E_Standard: FIR_F15E_Base {
		#include "config\F100-PW-229.hpp"
	};

	class FIR_F15A_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F15B_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-220.hpp"
	};
	class FIR_F15E_Demo_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-220_E.hpp"
	};
	class FIR_F15B_Civ_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-220.hpp"
	};

	class FIR_F15EX_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F110-GE-129.hpp"
	};

	class FIR_F15SE_Base: Plane_Fighter_03_base_F {
		#include "config\common.hpp"
		#include "config\F100-PW-229.hpp"
	};
};
