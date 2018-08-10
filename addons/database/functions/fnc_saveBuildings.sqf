/*
 * Author: Kalthramis
 * Finds all broken buildings on the map.
 * Broken buildings are structures that have 'hitzone_1' damaged to 1 or are typeOf ruins.
 *
 * PARAMS:
 * 0: owner of who called the function <OBJECT>
 *
 *
 * Return Value:
 * <BOOL>
 *
 * Example:
 * [player] call spag_database_fnc_saveBuildings;
 *
 * Public: yes
 */
params ["_caller"];

 if( !isServer || !(admin (owner _caller) == 2) ) exitWith { };

_damaged = "house" call EFUNC(database,findDamagedBuildings);
_ruins = "ruins" call EFUNC(database,findDamagedBuildings);
[_caller, _damaged, _ruins] call EFUNC(database,saveBuildingDamage);
