//CfgWeapons entries for Uniforms

class UniformItem;
class rhssaf_uniform_m10_digital_summer;
class rhssaf_uniform_m10_digital_desert;
//U_S_UNIFORM_SPAGPAT MISSIONG ITEMINFO.CONTAINERCLASS
class U_S_Uniform_SPAGPAT: rhssaf_uniform_m10_digital_summer
{
	scope = 2;
	scopeArsenal = 2;
	author = "Taepodong/Kalthramis";
	displayName = "Combat Uniform (SPAGPAT)";
	/* picture="\rhssaf\addons\rhssaf_c_gear\uniforms\icon_m10_digital_summer_ca.paa"; */
	/* model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; */
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "U_S_SPAGPAT";
		/* uniformClass = "rhssaf_soldier_army_digital_base"; */
		containerClass = "Supply60";
		mass=40;
	};
};


class U_S_Uniform_Neck_SPAGPAT: rhssaf_uniform_m10_digital_desert
{
	scope = 2;
	scopeArsenal = 2;
	author = "Taepodong/Kalthramis";
	displayName = "Combat Uniform (SPAGPAT/Neck)";
	/* picture="\rhssaf\addons\rhssaf_c_gear\uniforms\icon_m10_digital_summer_ca.paa"; */
	/* model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; */
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "U_S_Neck_SPAGPAT";
		/* uniformClass = "rhssaf_soldier_army_digital_base"; */
		containerClass = "Supply60";
		mass=40;
	};
};

//  BACKWARDS COMPATIBILITY
class spag_tsk: U_S_Uniform_SPAGPAT	{	scope = 1; scopeArsenal = 1; };
