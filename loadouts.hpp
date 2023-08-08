class CfgRoles
{
	class SquadLeader
	{
		displayName = "Squad Leader";
		icon = "a3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa";
	};
	class Assault
	{
		displayName = "Assault";
		icon = "a3\ui_f\data\map\vehicleicons\iconManMG_ca.paa";	
	};
	class Medic
	{
		displayName = "Medic";
		icon = "a3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";	
	};
	class Recon
	{
		displayName = "Recon";
		icon = "a3\ui_f\data\map\vehicleicons\iconManRecon_ca.paa";	
	};
	class Engineer
	{
		displayName = "Engineer";
		icon = "a3\ui_f\data\map\vehicleicons\iconManEngineer_ca.paa";	
	};
	class AntiVehicleSpecialist
	{
		displayName = "Anti Vehicle";
		icon = "a3\ui_f\data\map\vehicleicons\iconManAT_ca.paa";	
	};
};

class CfgRespawnInventory
{	
	class B_SquadLeader // Class of the respawn inventory, used by BIS_fnc_addRespawnInventory
	{
		displayName = "Squad Leader"; // Name of the respawn inventory
		role = "SquadLeader"; // Role the respawn inventory is assigned to
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; // Icon shown next to the role
		weapons[] = {
			"arifle_MX_F",
			"Binocular",
			"hgun_P07_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = { // Useable items
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_rgr",
			"H_HelmetB_desert",
			"optic_Hamr",
			"acc_pointer_IR",
			"NVGoggles",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CombatUniform_mcam_vest";
	};
	
	class O_SquadLeader
	{
		displayName = "Squad Leader"; 
		role = "SquadLeader";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_Katiba_F",
			"Binocular",
			"hgun_Rook40_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_khk",
			"H_HelmetLeaderO_ocamo",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_CombatUniform_ocamo";
	};
	
	class B_Medic
	{
		displayName = "Medic"; 
		role = "Medic";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		weapons[] = {
			"arifle_MX_F",
			"Binocular",
			"hgun_P07_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag"
		};
		items[] = { // Useable items
			"Medkit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_rgr",
			"H_HelmetB_desert",
			"optic_Hamr",
			"acc_pointer_IR",
			"NVGoggles",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		backpack = "B_AssaultPack_rgr_Medic";
	};
	
	class O_Medic
	{
		displayName = "Medic"; 
		role = "Medic";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_Katiba_F",
			"Binocular",
			"hgun_Rook40_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green"
		};
		items[] = {
			"Medikit"
		};
		linkedItems[] = {
			"V_TacVest_khk",
			"H_HelmetLeaderO_ocamo",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_CombatUniform_ocamo";
		backpack = "B_FieldPack_ocamo_Medic";
	};
	
	class B_Engineer
	{
		displayName = "Engineer";
		role = "Engineer";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		weapons[] = {
			"arifle_MX_F",
			"Binocular",
			"hgun_P07_F"
		};
		magazines[] = {
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"HandGrenade"
		};
		items[] = { // Useable items
			"FirstAidKit",
			"ToolKit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_Chestrig_rgr",
			"H_HelmetB_desert",
			"optic_Hamr",
			"acc_pointer_IR",
			"NVGoggles",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CombatUniform_mcam_vest";
		backpack = "B_Kitbag_mcamo_Eng";
	};
	
	class O_Engineer
	{
		displayName = "Engineer"; 
		role = "Engineer";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_Katiba_F",
			"Binocular",
			"hgun_Rook40_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit",
			"ToolKit",
			"MineDetector"
		};
		linkedItems[] = {
			"V_HarnessO_brn",
			"H_HelmetLeaderO_ocamo",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_CombatUniform_ocamo";
		backpack = "B_Carryall_ocamo_Eng";
	};
	
	class B_AT
	{
		displayName = "Anti Tank";
		role = "AntiVehicleSpecialist";		
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		weapons[] = {
			"arifle_MX_F",
			"Binocular",
			"launch_MRAWS_sand_F",
			"hgun_P07_F"
		};
		magazines[] = {
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"MRAWS_HEAT_F",
			"MRAWS_HE_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_rgr",
			"H_HelmetB_sand",
			"optic_Hamr",
			"acc_pointer_IR",
			"NVGoggles",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CombatUniform_mcam";
		backpack = "B_AssaultPack_rgr_LAT2";
	};
	
	class O_AT
	{
		displayName = "Anti Tank";
		role = "AntiVehicleSpecialist";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_Katiba_F",
			"Binocular",
			"launch_RPG32_F",
			"hgun_Rook40_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"RPG32_F",
			"RPG32_HE_F"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_khk",
			"H_HelmetO_ocamo",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_CombatUniform_ocamo";
		backpack = "B_FieldPack_cbr_LAT";
	};
	
	class B_AA
	{
		displayName = "Anti Air";
		role = "AntiVehicleSpecialist";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		weapons[] = {
			"arifle_MX_F",
			"Binocular",
			"launch_B_Titan_F",
			"hgun_P07_F"
		};
		magazines[] = {
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"Titan_AA",
			"Titan_AA"
		};
		items[] = { // Useable items
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_rgr",
			"H_HelmetB_sand",
			"optic_Hamr",
			"acc_pointer_IR",
			"NVGoggles",
			"B_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CombatUniform_mcam";
		backpack = "B_AssaultPack_mcamo_AA";
	};
	
	class O_AA
	{
		displayName = "Anti Air";
		role = "AntiVehicleSpecialist";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_Katiba_F",
			"Binocular",
			"launch_O_Titan_F",
			"hgun_Rook40_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"Titan_AA",
			"Titan_AA"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_khk",
			"H_HelmetO_ocamo",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"O_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_CombatUniform_ocamo";
		backpack = "B_FieldPack_ocamo_AA";
	};

	class B_Diver
	{
		displayName = "Diver";
		role = "AntiVehicleSpecialist";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_SDAR_F",
			"Laserdesignator"
			
		};
		magazines[] = {
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_RebreatherB",
			"G_Diving",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"B_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_Wetsuit";
		backpack = "B_FieldPack_blk";
	};

	class O_Diver
	{
		displayName = "Diver";
		role = "AntiVehicleSpecialist";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_SDAR_F",
			"Laserdesignator"
			
		};
		magazines[] = {
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag",
			"20Rnd_556x45_UW_mag"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_RebreatherIR",
			"G_Diving",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"O_UavTerminal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_Wetsuit";
		backpack = "B_FieldPack_ocamo";
	};

	class B_HAT
	{
		displayName = "Anti Tank";
		role = "AntiVehicleSpecialist";		
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa";
		weapons[] = {
			"arifle_MX_F",
			"Binocular",
			"launch_I_Titan_short_F",
			"hgun_P07_F"
		};
		magazines[] = {
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"Titan_AT",
			"Titan_AT",
			"Titan_AT"
			
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrier2_rgr",
			"H_HelmetB_sand",
			"optic_Hamr",
			"acc_pointer_IR",
			"NVGoggles",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_CombatUniform_mcam";
		backpack = "B_FieldPack_khk";
	};
	
	class O_HAT
	{
		displayName = "Anti Tank";
		role = "AntiVehicleSpecialist";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"arifle_Katiba_F",
			"Binocular",
			"launch_B_Titan_short_F",
			"hgun_Rook40_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"Titan_AT",
			"Titan_AT",
			"Titan_AT"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_khk",
			"H_HelmetO_ocamo",
			"optic_Arco_blk_F",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_CombatUniform_ocamo";
		backpack = "B_FieldPack_cbr";
	};

	class B_Sniper // Class of the respawn inventory, used by BIS_fnc_addRespawnInventory
	{
		displayName = "Sniper"; // Name of the respawn inventory
		role = "Sniper"; // Role the respawn inventory is assigned to
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; // Icon shown next to the role
		weapons[] = {
			"srifle_LRR_F",
			"Laserdesignator",
			"hgun_P07_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = { // Useable items
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_PlateCarrierGL_rgr",
			"H_HelmetB_desert",
			"optic_LRPS",
			"acc_pointer_IR",
			"NVGoggles",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_B_FullGhillie_ard";
		backpack = "B_FieldPack_khk";
	};
	
	class O_Sniper
	{
		displayName = "Sniper"; 
		role = "Sniper";
		icon = "\A3\ui_f\data\map\VehicleIcons\iconManLeader_ca.paa"; 
		weapons[] = {
			"srifle_LRR_F",
			"Laserdesignator",
			"hgun_Rook40_F"
		};
		magazines[] = {
			"SmokeShell",
			"SmokeShell",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"7Rnd_408_Mag",
			"HandGrenade",
			"HandGrenade"
		};
		items[] = {
			"FirstAidKit"
		};
		linkedItems[] = {
			"V_TacVest_khk",
			"H_HelmetLeaderO_ocamo",
			"optic_LRPS",
			"acc_pointer_IR",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		uniformClass = "U_O_FullGhillie_ard";
		backpack = "B_FieldPack_cbr";
	};
};

class CfgLoadoutCost
{
	class OpenWarlords
	{
		class WEST
		{
			class B_SquadLeader {progress=100;	name="Squad Leader";	reqstr="";	cost=0;	amount=0;	req[]={};};
			class B_Medic 		{progress=100;	name="Medic";			reqstr="MediKit";	cost=100;	amount=5;	req[]={"MediKit"};};
			class B_Engineer 	{progress=100;	name="Engineer";		reqstr="Toolkit";	cost=200;	amount=5;	req[]={"Toolkit"};};
			class B_AT 			{progress=100;	name="Anti-Tank";		reqstr="AT Launchers + Rocket";	cost=250;	amount=30;	req[]={"Vorona_HEAT","MRAWS_HE_F","MRAWS_HEAT55_F","MRAWS_HEAT_F","NLAW_F","RPG7_F","RPG32_HE_F","RPG32_F","Vorona_HE","Titan_AP","Titan_AT""launch_O_Vorona_brown_F","launch_O_Vorona_green_F","launch_MRAWS_green_rail_F","launch_MRAWS_olive_rail_F","launch_MRAWS_sand_rail_F","launch_MRAWS_green_F","launch_MRAWS_olive_F","launch_MRAWS_sand_F","launch_NLAW_F","launch_RPG32_green_F","launch_RPG32_F","launch_RPG32_ghex_F","launch_RPG7_F","launch_O_Titan_short_F","launch_O_Titan_short_ghex_F","launch_I_Titan_short_F","launch_B_Titan_short_F","launch_B_Titan_short_tna_F"};};
			class B_AA 			{progress=100;	name="Anti-Air";		reqstr="AA Launchers + Rocket";	cost=250;	amount=30;	req[]={"launch_I_Titan_F","launch_I_Titan_eaf_F","launch_O_Titan_ghex_F","launch_O_Titan_F","launch_B_Titan_olive_F","launch_B_Titan_F","launch_B_Titan_tna_F","Titan_AAA"};};
			class B_Diver		{progress=100;	name="Diver";		reqstr="Underwater gun";			cost=250;	amount=30;	req[]={};};
			class B_HAT 			{progress=100;	name="Heavy AT";		reqstr="AT Launchers + Rocket";	cost=250;	amount=30;	req[]={"Vorona_HEAT","MRAWS_HE_F","MRAWS_HEAT55_F","MRAWS_HEAT_F","NLAW_F","RPG7_F","RPG32_HE_F","RPG32_F","Vorona_HE","Titan_AP","Titan_AT""launch_O_Vorona_brown_F","launch_O_Vorona_green_F","launch_MRAWS_green_rail_F","launch_MRAWS_olive_rail_F","launch_MRAWS_sand_rail_F","launch_MRAWS_green_F","launch_MRAWS_olive_F","launch_MRAWS_sand_F","launch_NLAW_F","launch_RPG32_green_F","launch_RPG32_F","launch_RPG32_ghex_F","launch_RPG7_F","launch_O_Titan_short_F","launch_O_Titan_short_ghex_F","launch_I_Titan_short_F","launch_B_Titan_short_F","launch_B_Titan_short_tna_F"};};
			class B_Sniper {progress=100;	name="Sniper";	reqstr="";	cost=250;	amount=0;	req[]={};};
		};
		class EAST
		{
			class O_SquadLeader {progress=100;	name="Squad Leader";	reqstr="";	cost=0;	amount=0;	req[]={};};
			class O_Medic 		{progress=100;	name="Medic";			reqstr="MediKit";	cost=100;	amount=5;	req[]={"MediKit"};};
			class O_Engineer 	{progress=100;	name="Engineer";		reqstr="Toolkit";	cost=200;	amount=5;	req[]={"Toolkit"};};
			class O_AT 			{progress=100;	name="Anti-Tank";		reqstr="AT Launchers + Rocket";	cost=250;	amount=30;	req[]={"Vorona_HEAT","MRAWS_HE_F","MRAWS_HEAT55_F","MRAWS_HEAT_F","NLAW_F","RPG7_F","RPG32_HE_F","RPG32_F","Vorona_HE","Titan_AP","Titan_AT""launch_O_Vorona_brown_F","launch_O_Vorona_green_F","launch_MRAWS_green_rail_F","launch_MRAWS_olive_rail_F","launch_MRAWS_sand_rail_F","launch_MRAWS_green_F","launch_MRAWS_olive_F","launch_MRAWS_sand_F","launch_NLAW_F","launch_RPG32_green_F","launch_RPG32_F","launch_RPG32_ghex_F","launch_RPG7_F","launch_O_Titan_short_F","launch_O_Titan_short_ghex_F","launch_I_Titan_short_F","launch_B_Titan_short_F","launch_B_Titan_short_tna_F"};};
			class O_AA 			{progress=100;	name="Anti-Air";		reqstr="AA Launchers + Rocket";	cost=250;	amount=30;	req[]={"launch_I_Titan_F","launch_I_Titan_eaf_F","launch_O_Titan_ghex_F","launch_O_Titan_F","launch_B_Titan_olive_F","launch_B_Titan_F","launch_B_Titan_tna_F","Titan_AAA"};};
			class O_Diver		{progress=100;	name="Diver";		reqstr="Underwater gun";			cost=250;	amount=30;	req[]={};};
			class O_HAT 			{progress=100;	name="Heavy AT";		reqstr="AT Launchers + Rocket";	cost=250;	amount=30;	req[]={"Vorona_HEAT","MRAWS_HE_F","MRAWS_HEAT55_F","MRAWS_HEAT_F","NLAW_F","RPG7_F","RPG32_HE_F","RPG32_F","Vorona_HE","Titan_AP","Titan_AT""launch_O_Vorona_brown_F","launch_O_Vorona_green_F","launch_MRAWS_green_rail_F","launch_MRAWS_olive_rail_F","launch_MRAWS_sand_rail_F","launch_MRAWS_green_F","launch_MRAWS_olive_F","launch_MRAWS_sand_F","launch_NLAW_F","launch_RPG32_green_F","launch_RPG32_F","launch_RPG32_ghex_F","launch_RPG7_F","launch_O_Titan_short_F","launch_O_Titan_short_ghex_F","launch_I_Titan_short_F","launch_B_Titan_short_F","launch_B_Titan_short_tna_F"};};
			class O_Sniper {progress=100;	name="Sniper";	reqstr="";	cost=250;	amount=0;	req[]={};};
		};
	};
};