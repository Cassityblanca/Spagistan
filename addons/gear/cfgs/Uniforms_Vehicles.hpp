//CfgVehicle bases and groundholders for Uniforms

// UNIFORMS
/* class SoldierGB ;
class rhssaf_soldier_m10_base: SoldierGB
{
	hiddenSelectionsTextures = {"camo1","camo2","camo3","insignia"};
}; */
/* class Item_Base_F; */
class rhssaf_soldier_un_desert_base;
class rhssaf_soldier_army_para_digital_base;
//rhssaf_soldier_m10_base
class U_S_SPAGPAT: rhssaf_soldier_army_para_digital_base
{
  author = "Taepodong/Kalthramis";
  dlc = "Spagistan";
  displayName = "Combat Uniform (SPAGPAT)";
  nakedUniform = "U_BasicBody";
  uniformClass = "U_S_Uniform_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_shirt) };
};


class U_S_Neck_SPAGPAT: rhssaf_soldier_un_desert_base
{
  author = "Taepodong/Kalthramis";
  dlc = "Spagistan";
  displayName = "Combat Uniform (SPAGPAT Necker)";
  nakedUniform = "U_BasicBody";
  uniformClass = "U_S_Uniform_Neck_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\m10_d_spag_scarf) };
};

// UNIFORM GROUND HOLDERS

/* class Item_S_Uniform_SPAGPAT: Item_Base_F
{
	class TransportItems
	{
		class S_Uniform_SPAGPAT
		{
			name = "S_Uniform_SPAGPAT";
			count =  1;
		};
	};
}; */


//  BACKWARDS COMPATIBILITY
class spag_turk: U_S_SPAGPAT	{ scope = 1;	scopeArsenal = 1; };
