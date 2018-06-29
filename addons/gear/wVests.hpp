//CfgWeapons -> vests

  //please remember to test LODs
class ItemInfo;
class ItemCore;
class VestItem;
class rhssaf_vest_md12_digital;

/* class S_Vest_SPAGPAT: rhssaf_vest_md12_digital_desert
{
  _generalMacro = "S_Vest_SPAGPAT";
  displayName = "Ballistic Vest (SPAGPAT)";
  author = "Taepodong/Kalthramis";
  /* picture = "\rhssaf\addons\rhssaf_c_gear\vests\icon_md98_digital_ca.paa"; */
  /* model = "rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12"; */
  /* hiddenSelections[] = { "camo" }; */
  hiddenSelectionsTextures[] = { QPATHTOF(vests\m12_SPAGPAT_ca.paa) };
  descriptionShort = "Spagistan Vest";
  scope = 2;
  scopeArsenal = 2;

  /* class ItemInfo: ItemInfo
  {
    containerClass = "Supply100";
    mass = 70;
    /* uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12"; */
    /* hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = { QPATHTOF(vests\m12_SPAGPAT_ca.paa) }; */
//  }; */
  /* class ItemInfo : VestItem
  {
    hiddenSelections[] = {"camo"};
    uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
    containerClass = "Supply100";
    mass = 70;
  }; */
//}; */
//m12 spag error
//tan helmets
//change helmet model to canvas helmet
//outline pockets on uniform

class S_Vest_SPAGPAT: rhssaf_vest_md12_digital
{
  displayName="Spagistan Ballistic Vest";
  author = "Taepodong";
  hiddenSelections[]=
  {
    "camo"
  };
  hiddenSelectionsTextures[]=
  {
    QPATHTOF(vests\m12_SPAGPAT_ca.paa)
  };
};



//  BACKWARDS COMPATIBILITY

class m12_spag: S_Vest_SPAGPAT	{	scope = 1; scopeArsenal = 1; };
