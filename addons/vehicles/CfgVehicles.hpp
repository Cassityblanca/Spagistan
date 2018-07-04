#define backpack_xx(a,b) class _xx_##a {backpack = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

// we use:
// M113A3 (unarmed) - rhsusf_m113_usarmy_unarmed
//
// M113A3 M2 - LOP_RACS_M113_W

//ural 37D
// rhssaf_army_ural

// BMP1
// LOP_IRAN_BMP1

// BTR-60PB
// LOP_AFR_BTR60

//MI-8MT
class CfgVehicles
{
	#include "CfgHmmwv.hpp"
	#include "CfgBMP.hpp"
};


#undef backpack_xx(a,b)
#undef mag_xx(a,b)
#undef weap_xx(a,b)
#undef item_xx(a,b)
