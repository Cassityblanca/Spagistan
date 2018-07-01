#define HUMMVSETTINGS scope = 2;\
scopeCurator = 2;\
side = 2;\
author = "RHS/Kalthramis";\
editorCategory = "Spagistan_Catagory";\
faction = "Spag_F";\
tf_hasLRradio = 1;\
tf_RadioType = "TFAR_anprc155_coyote";\
tf_isolatedAmount = 0.5;\
tf_RadioType_api = "TFAR_anprc155_coyote";\
tf_encryptionCode = "_independent";\
tf_hasLRradio_api = 1;\
tf_isolatedAmount_api = 0.2;

#define HUMMVSUNIVERSAL QPATHTOF(data\hmmwv\hmv_base_d_spag_co),\
	QPATHTOF(data\hmmwv\m998_interior_d_co),\
	QPATHTOF(data\hmmwv\A2_parts_D_co),\
	QPATHTOF(data\hmmwv\wheel_wranglermt_d_co),\
	QPATHTOF(data\hmmwv\m998_mainbody_d_co),\
	QPATHTOF(data\hmmwv\gratting_d_co),\
	QPATHTOF(data\hmmwv\tile_exmetal_d_co),\
	""

#define HUMMVSUNIVERSALARMED QPATHTOF(data\hmmwv\hmv_base_d_spag_co), \
	QPATHTOF(data\hmmwv\m998_interior_d_co), \
	QPATHTOF(data\hmmwv\A2_parts_D_co), \
	QPATHTOF(data\hmmwv\wheel_wranglermt_d_co), \
	QPATHTOF(data\hmmwv\m998_mainbody_d_co), \
	QPATHTOF(data\hmmwv\gratting_d_co), \
	QPATHTOF(data\hmmwv\tile_exmetal_d_co), \
	QPATHTOF(data\hmmwv\hmv_metalTop_d_spag_co), \
	QPATHTOF(data\hmmwv\mk64mount_d_co), \
	QPATHTOF(data\hmmwv\hmv_unarmed_decal), \
	""

#define HUMMVSUNIVERSALSOFT(STUFF) QPATHTOF(data\hmmwv\hmv_base_d_spag_co), \
	QPATHTOF(data\hmmwv\m998_interior_d_co), \
	QPATHTOF(data\hmmwv\A2_parts_D_co), \
	QPATHTOF(data\hmmwv\wheel_wranglermt_d_co), \
	QPATHTOF(data\hmmwv\m998_mainbody_d_co), \
	QPATHTOF(data\hmmwv\gratting_d_co), \
	QPATHTOF(data\hmmwv\m998_interior_wood_d_co), \
	QPATHTOF(data\hmmwv\##STUFF), \
	QPATHTOF(data\hmmwv\hmv_unarmed_decal), \
	""

//CHANGE HELMET TO M97 (stuff)
//allow helmets on vest
//option to lower helmet
//add thing to arsenal to keep previous radio channel sheit


#define HUMMVLOADOUT class TransportBackpacks\
	{\
		backpack_xx(S_KitBag_Spag, 2);\
	};\
	class TransportWeapons\
	{\
		weap_xx(rhs_weap_ak74m, 2);\
		weap_xx(rhs_weap_rpg26, 2);\
	};\
	class TransportMagazines\
	{\
		mag_xx(rhs_30Rnd_545x39_7N22_AK,20);\
		mag_xx(rhs_200rnd_556x45_m_saw,4);\
		mag_xx(rhssaf_250rnd_762x54r,4);\
		mag_xx(rhs_VOG25,30);\
		mag_xx(rhs_GDM40,30);\
		mag_xx(murshun_cigs_cigpack, 4);\
		mag_xx(murshun_cigs_lighter, 4);\
	};\
	class TransportItems\
	{\
		item_xx(ACE_EntrenchingTool, 1);\
	};

#define HIDEA2 	class  light_bo\
			{\
				source = "user";\
				initPhase = 1;\
				animPeriod = 0.00001;\
			};\
			class  hide_A2_Parts: light_bo\
			{\
				initPhase = 0;\
				displayName = "Hide A2 Parts";\
			};\
			class Hide_Snorkel: light_bo\
			{\
				displayName = "Hide Snorkel";\
			};\
			class  hide_CIP: light_bo\
			{\
				displayName = "Hide CIP";\
			};\
			class  hide_BFT: light_bo\
			{\
				displayName = "Hide BFT";\
			};\
			class hide_Antenna: light_bo\
			{\
				initPhase = 0;\
				displayName = "Hide Antenna";\
			};\
			class  Hide_A2Bumper: light_bo\
			{\
				displayName = "Hide A2 Bumper";\
			};

//Parents
class AnimationSources {} ;
	class EventHandlers {};
	class UserActions {};
	class Turrets {};
	class rhsusf_m1025_d ; //hmv
	class rhsusf_m1025_d_m2 ; //ar
	class rhsusf_m1025_d_mk19  ; //gl
	class rhsusf_m998_d_2dr_fulltop ; //troop Transport
	class rhsusf_m998_d_4dr_fulltop ; //softop full
	class rhsusf_m998_d_4dr_halftop ; //softop half
	class rhsusf_m998_d_4dr ; //open

class hummv_d_SPAGPAT: rhsusf_m1025_d
{
	HUMMVSETTINGS
	HUMMVLOADOUT
	HiddenSelectionsTextures[] = {
		QPATHTOF(data\hmmwv\hmv_base_d_spag_co),
		QPATHTOF(data\hmmwv\m998_interior_d_co),
		QPATHTOF(data\hmmwv\A2_parts_D_co),
		QPATHTOF(data\hmmwv\wheel_wranglermt_d_co),
		QPATHTOF(data\hmmwv\m998_mainbody_d_co),
		QPATHTOF(data\hmmwv\gratting_d_co),
		QPATHTOF(data\hmmwv\tile_exmetal_d_co),
		QPATHTOF(data\hmmwv\hmv_metalTop_d_spag_co),
		QPATHTOF(data\hmmwv\hmv_unarmed_decal),
		""
	 };
	class textureSources
	{

		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSAL };
		};
	};
	class AnimationSources: AnimationSources
	{
		HIDEA2
	};
};

class hummv_d_SPAGPAT_ar: rhsusf_m1025_d_m2 //ar
{
	HUMMVSETTINGS
	HUMMVLOADOUT
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALARMED };
	class textureSources
	{

		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALARMED };
		};
	};

	class AnimationSources: AnimationSources
	{
		HIDEA2
	};
};


class hummv_d_SPAGPAT_gl: rhsusf_m1025_d_mk19 //gl
{
	HUMMVSETTINGS
	HUMMVLOADOUT
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALARMED };
	class textureSources
	{

		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALARMED };
		};
	};

	class AnimationSources: AnimationSources
	{
		HIDEA2
	};
};

class hummv_d_SPAGPAT_troop: rhsusf_m998_d_2dr_fulltop //troop Transport
{
	HUMMVSETTINGS
	HUMMVLOADOUT
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_2drcargo_d_co) };
	class textureSources
	{

		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = {  HUMMVSUNIVERSALSOFT(m998_2drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		HIDEA2
		class  hide_frontTop: light_bo
		{
			displayName = "Hide Frontop";
			initPhase = 0;
		};
		class  hide_backTop: light_bo
		{
			initPhase = 0;
			displayName="Hide Canopy";
		};
	};
};
//hint str (Box_East_AmmoVeh_F in (nearestObjects [player, ["Box_East_AmmoVeh_F"], 5]))
class hummv_d_SPAGPAT_WPSS: hummv_d_SPAGPAT_troop //WEAPON SQUAD Transport Version
{
	displayName = "M10 Cargo";
	memoryPointsGetInCargo[] = {"pos_cargo_RF"};
	memoryPointsGetInCargoDir[] = {"pos_cargo_RF_dir"};
	editorPreview = QPATHTOF(data\EditorPreviews\custom_hummv_cargo.jpg);
	maximumLoad = 2200;
	ace_cargo_space = 7;
	transportSoldier = 1;
	fuelConsumptionRate = 0.02;
	acceleration = 12;
	/* lockCargoAnimationPhase = 0; //broke */
	/* lockCargo[] = {}; */
	class CargoTurret;
	class Turrets: Turrets
	{
		class CargoTurret_01
		{
			memoryPointsGetInGunner = "";
		};
		class CargoTurret_02: CargoTurret_01 { };
	};
	//In case box is removed
	/* class UserActions: UserActions
	{
		class showCargo
		{
			//TODO: make the object interactable, and require it to find a nearby box (that is far enough away to avoid checkin self)
			displayName = "<t color='#499273'>Show Ammobox</t>";
			position = "pos_cargo";
			radius = 3;
			onlyForplayer = false;
			condition = "count (nearestObjects [this, ['Box_East_AmmoVeh_F'], 5]) < 1;";
			statement = "_crate = createSimpleObject ['O_CargoNet_01_Ammo_f', (position _this select 0)]; _crate disableCollisionWith this; _crate attachTo [this, [0,-1,-0.1]];";
		};
	}; */

	//_crate = createSimpleObject ['O_CargoNet_01_ammo_F', position (_this select 0)]; _crate disableCollisionWith (_this select 0); _crate attachTo [(_this select 0), [0,0-.75,-0.1]];
	//_box = createSimpleObject ['Box_CSAT_Equip_F', position (_this select 0)]; _box disableCollisionWith (_this select 0); _box attachTo [(_this select 0), [0,0-.75,-0.1]]; _box attachTo [(_this select 0), [0,-1.83,-0.6]]; _box setDir ( ( getDir (_this select 0) ) - 90 );
	class EventHandlers: EventHandlers
	{
		init = "if (!(is3Den) && local (_this select 0)) then {_crate = createSimpleObject ['O_CargoNet_01_ammo_F', position (_this select 0)]; _crate disableCollisionWith (_this select 0); _crate attachTo [(_this select 0), [0,0-.745,-0.1]]; _box = createSimpleObject ['Box_CSAT_Equip_F', position (_this select 0)]; _box disableCollisionWith (_this select 0); _box attachTo [(_this select 0), [0,0-.75,-0.1]]; _box attachTo [(_this select 0), [0,-1.83,-0.6]]; _box setDir ((getDir (_this select 0)) - 90);};";
	};
	class AnimationSources: AnimationSources
	{
		class  hide_backTop: light_bo
		{
			initPhase = 1;
			displayName="Hide Canopy (CLIPPING ISSUES, Not recommended!)";
		};
	};

};

class hummv_d_SPAGPAT_softF: rhsusf_m998_d_4dr_fulltop //softop full
{
	HUMMVSETTINGS
	HUMMVLOADOUT
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
	class textureSources
	{

		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		HIDEA2
	};
};

class hummv_d_SPAGPAT_softH: rhsusf_m998_d_4dr_halftop //softop half
{
	HUMMVSETTINGS
	HUMMVLOADOUT

	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };

	class textureSources
	{

		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		HIDEA2
		class hide_frontTop: light_bo
		{
			source = "user";
			displayName = "Hide Frontop";
			initPhase = 0;
		};
		class hide_middleTop: light_bo
		{
			source = "user";
			displayName = "Hide Middletop";
			initPhase = 1;
		};
		class hide_backTop: light_bo
		{
			initPhase = 1;
			displayName = "Hide Backtop";
		};
	};
};

class hummv_d_SPAGPAT_open: rhsusf_m998_d_4dr //open
{
	HUMMVSETTINGS
	HUMMVLOADOUT
	HiddenSelectionsTextures[] = { HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
	class textureSources
	{

		class Spagpat
		{
			displayName = "Spagpat";
			factions[] = {SPAG_F};
			textures[] = {  HUMMVSUNIVERSALSOFT(m998_4drcargo_d_co) };
		};
	};
	class AnimationSources: AnimationSources
	{
		HIDEA2
		class hide_frontTop: light_bo
		{
			initPhase = 1;
			displayName = "Hide Frontop";
		};
		class hide_middleTop: light_bo
		{
			initPhase = 0;
			displayName = "Hide Middletop";
		};
		class hide_backTop: light_bo
		{
			initPhase = 1;
			displayName = "Hide Backtop";
		};
	};
};
