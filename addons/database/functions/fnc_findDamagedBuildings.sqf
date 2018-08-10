/*
 * Author: Kalthramis
 * Finds all broken buildings on the map.
 * Broken buildings are structures that have 'hitzone_1' damaged to 1 or are typeOf ruins.
 *
 * PARAMS:
 * 0: "house" OR "ruins" <STRING>
 *
 *
 * Return Value:
 * Requested buildings <ARRAY>
 *
 * Example:
 * ["house"] call kal_fnc_findDamagedStructs; || ["ruins"] call kal_fnc_findDamagedStructs;
 *
 * Public: yes
 */
params ["_type"];

if( !(toLower _type == "house") && !(toLower _type == "ruins") ) exitWith {
	systemChat "exiting findDamagedBuildings";
	diag_log "spag_database_findDamagedBuildings only accepts 'ruins' or 'house'";
};

private ["_worldRadius", "_worldCenter", "_structs", "_damaged", "_entry", "_data"];

_worldRadius = worldSize / 2;
_worldCenter = [_worldRadius, _worldRadius, 0];
_structs = nearestObjects [_worldCenter, [_type], 5000, true];

//Find buildings
_damaged = [];
_entry = [];
{
	if( _type == "house" && (_x getHitPointDamage "hitzone_1_hitpoint" == 1 || _x getHitPointDamage "hitzone_2_hitpoint" == 1) ) then {
		_data = getAllHitPointsDamage _x;
		_entry = [_data select 2,position _x ]; //damage /  positon
		_damaged pushback _entry;
	};
	if (_type == "ruins") then {
		_entry = [position _x ]; //classname / position
		_damaged pushback _entry;
	};
}foreach _structs;

_damaged
