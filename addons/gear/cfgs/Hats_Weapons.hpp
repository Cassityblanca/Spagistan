//CfgWeapons -> Hats
class rhssaf_helmet_m97_woodland;
class rhssaf_helmet_m97_black_nocamo_black_ess;
class rhssaf_helmet_m97_black_nocamo_black_ess_bare;
class rhssaf_helmet_m97_woodland_black_ess;
class rhssaf_helmet_m97_woodland_black_ess_bare;
class rhsusf_patrolcap_ucp;
//15:39:48 Warning Message: Cannot load texture z\spag\addons\equipment\uniforms\m10_spagpat_ca.paa.
//15:40:15 Warning Message: No entry 'bin\config.bin/CfgWeapons/U_S_Uniform_SPAGPAT/ItemInfo.containerClass
// HELMETS
class S_Helmet_SPAGPAT: rhssaf_helmet_m97_woodland
{
  scope = 2;
  scopeArsenal = 2;
  author = "Taepodong/Kalthramis";
  allowedslots[] = { 701, 801, 901 };
  displayName = "Combat Helm (SPAGPAT)";
  hiddenSelectionsTextures[] = { QPATHTOF(data\hats\m97_canvas_d_spag_co.paa) };
  descriptionShort = "Spagistan Helmet";
};
class S_Helmet_SPAGPAT_black_ess: rhssaf_helmet_m97_woodland_black_ess
{
  scope = 2;
  scopeArsenal = 2;
  author = "Kalthramis";
  allowedslots[] = { 701, 801, 901 };
  displayName = "Combat Helm (SPAGPAT/Black/ESS)";
  hiddenSelectionsTextures[] = { QPATHTOF(data\hats\m97_canvas_d_spag_co.paa), QPATHTOF(data\hats\rhssaf_m97_ess_black_co.paa) };
};
class S_Helmet_SPAGPAT_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
{
  scope = 2;
  scopeArsenal = 2;
  author = "Kalthramis";
  allowedslots[] = { 701, 801, 901 };
  displayName = "Combat Helm (SPAGPAT/Black ESS/Bare)";
  hiddenSelectionsTextures[] = { QPATHTOF(data\hats\m97_canvas_d_spag_co.paa), QPATHTOF(data\hats\rhssaf_m97_ess_black_co.paa) };
};
// HATS
class S_PatrolCap_SPAGPAT: rhsusf_patrolcap_ucp
{
	//dexterity = 3.1
    displayName = "Patrol Cap (SPAGPAT)";
    scope = 2;
    hiddenSelectionsTextures[] = { QPATHTOF(data\hats\PatrolCap_SPAGPAT_ca.paa)};
};


//  BACKWARDS COMPATIBILITY

class spag_helmet: S_Helmet_SPAGPAT	{ scope = 1; scopeArsenal = 1; };
