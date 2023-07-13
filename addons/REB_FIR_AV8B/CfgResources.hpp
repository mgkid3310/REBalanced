class RscProgress;
class RscPicture;

class RscInGameUI {
	class RscUnitInfoAirPlane;
	class Rsc_REB_AV8B_UnitInfo: RscUnitInfoAirPlane {
		onLoad = "uiNamespace setVariable ['HUD', _this select 0]; ['onLoad', _this, 'RscUnitInfo', 'IGUI'] call compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'";
		onUnload = "uiNamespace setVariable ['HUD', nil]; ['onUnload', _this, 'RscUnitInfo', 'IGUI'] call compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'";
		idd = 300;
		controls[] = {
			"WeaponInfoControlsGroupRight",
			"CA_BackgroundVehicle",
			"CA_BackgroundVehicleTitle",
			"CA_BackgroundVehicleTitleDark",
			"CA_BackgroundFuel",
			"CA_Vehicle",
			"CA_VehicleRole",
			"CA_HitZones",
			"CA_VehicleTogglesBackground",
			"CA_VehicleToggles",
			"CA_SpeedBackground",
			"CA_SpeedUnits",
			"CA_Speed",
			"CA_ValueFuel",
			"CA_AltBackground",
			"CA_AltUnits",
			"CA_Alt",
			//"CA_Radar",
			"REB_AV8B_External_fuel_Progress",
			"CA_Throttle"
		};
		class CA_ValueFuel: RscProgress {
			idc = 113;
			texture = "#(argb,8,8,3)color(1,1,1,1)";
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable ['IGUI_GRID_VEHICLE_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getvariable ['IGUI_GRID_VEHICLE_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class REB_AV8B_External_fuel_Progress: CA_ValueFuel {
			idc = 9910;
			x = "5 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable ['IGUI_GRID_VEHICLE_X', (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
			y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getvariable ['IGUI_GRID_VEHICLE_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
