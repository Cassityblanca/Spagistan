class CfgVehicles
{
	class B_Soldier_base_F;
	class tf_mr3000;
	class Bag_Base;
	class spag_turk: B_Soldier_base_F
	{
		scope=2;
		author="Taepodong";
		dlc="Spagistan";
		displayName="Spagistan Combat Uniform";
		nakedUniform="U_BasicBody";
		uniformClass="spag_tsk";
		model="\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\spag\data\retextures\equipmentspag_turk.paa"
		};
	};
	class spag_radio: tf_mr3000
	{
		author="Raspu, Gandi, Taepodong";
		displayName="MR3000 (Spagistan)";
		descriptionShort="MR3000 long range radio 20km";
		DLC="Spagistan";
		maximumLoad=160;
		mass=160;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\spag\data\retextures\equipmentspagradio.paa"
		};
		model="\tfar_bacpacks\models\clf_nicecomm2";
	};
	class spagbag: Bag_Base
	{
		author="Taepodong";
		scope=2;
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName="Spagistan Kitbag";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\spag\data\retextures\equipmentspagbag.paa"
		};
		maximumLoad=280;
		mass=50;
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class ItemCore;
	class HeadgearItem;
	class rhssaf_vest_md12_digital;
	class vestitem;
	class spag_tsk: Uniform_Base
	{
		scope=2;
		author="Taepodong";
		dlc="Spagistan";
		displayName="Spagistan Combat Uniform";
		picture="\rhssaf\addons\rhssaf_c_gear\data\uniforms\icon_m10_digital_summer_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="spag_turk";
			containerClass="Supply60";
			mass=40;
		};
	};
	class spag_helmet: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		displayName="Spagistan Combat Helmet";
		author="Taepodong";
		picture="\rhssaf\addons\rhssaf_c_gear\data\headgear\icon_m97_nocamo_ca.paa";
		model="\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"spag\data\retextures\equipmentspaghelmet"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
			modelSides[]={3,2,1,0};
			hiddenSelections[]=
			{
				"camo"
			};
			allowedslots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m12_spag: rhssaf_vest_md12_digital
	{
		displayName="Spagistan Ballistic Vest";
		author="Taepodong";
		model="rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"spag\data\retextures\equipmentspag_vest.paa"
		};
	};
};