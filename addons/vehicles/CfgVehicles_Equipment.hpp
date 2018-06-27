class CfgVehicles
{
	class I_Soldier_base_F;
	class TFAR_mr3000;
	class Bag_Base;


	class TFAR_SPAG_mr3000: TFAR_mr3000
	{
		author = "Kalthramis";
		displayName = "MR3000 BWMOD [Spagistan]";
		descriptionShort = "Spagistan-camo LR Radio";
		picture = "\Task Force Arrowhead Radio (BETA!!!)\addons\tfar_backpacks\mr3000\ui\mr3000_icon.paa";
		maximumLoad = 160;
		mass = 160;
	//	model = "\Task Force Arrowhead Radio (BETA!!!)\addons\tfar_backpacks\models\clf_nicecomm2";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { QPATHTOF(data\equipment\SPAG_MR3000_co.paa)};
		tf_encryptionCode = "tf_east_radio_code";B
		tf_dialog = "mr3000_radio_dialog";
		tf_subtype = "digital_lr";
	};

	class S_Bag_Spag: Bag_Base
	{
		author = "Taepodong";
		generalMacro = "S_AssaultPack_Spag1";
		scope = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Spagistan Kitbag";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelections[] = { "camo"	};
		hiddenSelectionsTextures[] = { QPATHTOF(data\equipment\spag_bag_co.paa) };
		maximumLoad = 280;
		mass = 50;
	};

	 class Spag_Soldier: I_Soldier_base_F
 	{
 		scope = 2;
 		author = "Taepodong";
 		dlc = "Spagistan";
 		displayName = "Spagistan Combat Uniform";
 		nakedUniform = "U_BasicBody";
 		uniformClass = "Item_U_S_Uniform_Spag";
 		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer.p3d";
 		hiddenSelections[] = {"camo","Insignia"};
 		hiddenSelectionsTextures[] = { QPATHTOF(data\equipment\spag_uniform_co.paa) };
 	};
};

class CfgWeapons
{

	class HeadGearItem;
	class ItemCore;
	class ItemInfo;
	class H_HelmetB;
	class rhssaf_helmet_base;
	class Vest_Camo_Base;
	class rhssaf_balistic_vest_base;
	class rhssaf_vest_md12_digital;
	class Uniform_Base;
	class UniformItem;
	//class ItemVest;


	class S_Helmet_Spag: rhssaf_helmet_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author= "Taepodong/Kalthramis";
		displayName = "Spagistan Combat Helmet";
		picture = "\rhssaf\addons\rhssaf_c_gear\data\headgear\icon_m97_nocamo_ca.paa";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = { QPATHTOF(data\equipment\spag_helmet_co.paa) };
		descriptionShort = "Spagistan Helmet";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Helmets";
		vehicleClass = "ItemsHeadgear";
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};

	//class All;
	//class Static;
	//class Building;
	//class Strategic;
	//class ReammoBox;
	//class WeaponHolder;
	//class Item_Base_F;
	/* class Item_U_S_Uniform_Spag: Uniform_Base
	{
		//hiddenSelectionsTextures[] = {"\z\spag\addons\vehicles\data\equipment\spag_bag_co.paa"};
		scope = 2;
		author= "Taepodong/Kalthramis";
		displayName = "Spagistan Combat Uniform";
		picture = "\rhssaf\addons\rhssaf_c_gear\data\uniforms\icon_m10_digital_summer_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = { QPATHTOF(data\equipment\spag_uniform_co.paa) };
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "rhssaf_soldier_army_para_digital_base";
			containerClass = "Supply60";
			mass = 40;
			hiddenSelections[] = {"camo"};
		};
	}; */

	class Item_U_S_Uniform_Spag: Uniform_Base
	{
		scope=2;
		author="Taepodong";
		dlc="Spagistan";
		displayName="Spagistan Combat Uniform";
		picture="\rhssaf\addons\rhssaf_c_gear\data\uniforms\icon_m10_digital_summer_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "Spag_Soldier";
			containerClass = "Supply60";
			mass=40;
		};
	};

	class S_Vest_Spag: rhssaf_vest_md12_digital
	{
		displayName = "Spagistan Ballistic Vest";
		author = "Taepodong";
		/* picture = "\rhssaf\addons\rhssaf_c_gear\data\vests\icon_md98_digital_ca.paa"; */
		model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = {QPATHTOF(data\equipment\spag_vest_co.paa)};
		descriptionShort = "Spagistan Vest";
		/* class ItemInfo : VestItem
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
			containerClass = "Supply100";
			mass = 70;
		}; */
	};
    class S_Hat: H_HelmetB
    {
        displayName = "Custom ECH SF";
        picture = "";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\Custom_Uniform\Data\custom_helmet_co.paa"};
        hiddenSelectionsMaterials[] = {"Custom_Uniform\Data\custom_helmet.rvmat"};
        class ItemInfo: ItemInfo
        {
            mass = 20;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo"};
            armor = "3*0.4";
            passThrough = 0.65;
        };
    };
};
