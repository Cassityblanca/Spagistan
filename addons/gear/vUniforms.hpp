//CfgVehicle bases and groundholders for Uniforms

// UNIFORMS
class rhssaf_soldier_army_para_digital_base;

class U_S_SPAGPAT: rhssaf_soldier_army_para_digital_base
{
  author = "Taepodong/Kalthramis";
  dlc = "Spagistan";
  displayName = "Combat Uniform (SPAGPAT)";
  nakedUniform = "U_BasicBody";
  uniformClass = "U_S_Uniform_SPAGPAT";
  hiddenSelections[] = {"camo","Insignia"};
  hiddenSelectionsTextures[] = { QPATHTOF(uniforms\m10_SPAGPAT_ca.paa) };
};

// UNIFORM GROUND HOLDERS
/*
class Item_U_S_Soldier_Base : U_S_SPAGPAT
{
  scope = 2;
  displayName = "Combat Uniform (SPAGPAT)";
  vehicleClass = ItemsUniforms;
//  model = "\A3\weapons_f\dummyweapon.p3d";
  class TransportItems
  {
    class U_S_Soldier_Base
    {
      name = U_S_Soldier_Base;
      hiddenSelectionsTextures[] = { QPATHTOF(uniforms\m10_SPAGPAT_ca.paa) };
      count = 1;
    };
  };
};
*/

//  BACKWARDS COMPATIBILITY
class spag_turk: U_S_SPAGPAT	{ scope = 1;	scopeArsenal = 1; };
