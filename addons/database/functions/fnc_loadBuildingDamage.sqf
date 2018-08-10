/*
 * Author: Kalthramis
 * If on the current Spagistan map and year, attempt to load the server data for the map.
 *
 * PARAMS:
 * 0: "house" OR "ruins" <STRING>
 *
 *
 * Return Value:
 * The return value <BOOL>
 *
 * Example:
 * call kal_fnc_findDamagedStructs;
 *
 * Public: yes
 */

private ["_map", "_year", "_db", "_dbExists", "_buildings", "_hitpart", "_damage", "_class", "_position", "_ruins", "_i", "_house", "_handler"];

_map = missionNameSpace getVariable "SPAGMAP";
_year = missionNameSpace getVariable "SPAGYEAR";
_section = _map +  " " + _year + " - Persistent Building Data";

_db = ["new", "Spagistan Map data"] call OO_INIDBI;
_dbExists = "exists" call _db;

if( !(toUpper worldName == toUpper _map) || !_dbExists) exitWith {
	systemChat "Incorrect Spagistan map - skipping damaged building persistence";
	diag_log format ["Spagistan: Incorrect Spagistan map - is %1, should be %2 OR database does not exist.", (toUpper worldName), _map];
};



//Buildings -  damage / positon
/* _buildings = ["read", [_section, "Damaged"]] call _db; */
_handler = [missionNameSpace, "Spagistan_Data_Buildings", default] spawn BIS_fnc_getServerVariable;
waituntil { scriptDone _handler };

if(typeName _buildings == "ARRAY") then {
	systemChat "Loading building data";
	for [{_i = 0}, {_i < count _buildings}, {_i = _i+1}] do {

		_house = _buildings select _i;
		_damage = _house select 0;
		_position = _house select 1;

		_foundHouse = nearestObjects [_position, ["house"], 20, true] select 0;
		_hitPositions = (getAllHitPointsDamage _foundHouse) select 0;
		/* systemChat format ["nearestObjects [%1, [%2], 20, true] select 0 is %3", _position, str _class, _foundHouse]; */

		if(!(isNull _foundHouse)) then{
			for [{_j = 0}, {_j < count _damage}, {_j = _j+1}] do {
				_foundHouse setHitPointDamage [_hitPositions select _j, _damage select _j, false];
			};
		}
		else{
			diag_log format ["Spagistan: Could not destroy building (building) at: %1", _position];
		};
	};
};

//Ruins - position
/* _ruins = ["read", [_section, "Ruined"]] call _db; */
_handler = [missionNameSpace, "Spagistan_Data_Ruins", default] spawn BIS_fnc_getServerVariable;
waituntil { scriptDone _handler };

if (typeName _ruins == "ARRAY") then {

	for [{_i = 0}, {_i < count _ruins}, {_i = _i+1}] do {
		_house = _ruins select _i;
		_position = _house select 0;

		_foundHouse = nearestObjects [_position, ["house", "ruins"], 20, true] select 0;
		/* systemChat format ["Destroying ruin %1 at %2", _foundHouse select 0, _position]; */

		if(!(isNull _foundHouse)) then{
			_foundHouse setDamage [1, false];
		}
		else{
			diag_log format ["Spagistan: Could not destroy building (ruins) at: %1", _position];
		};
	};

	true
}
else
{
	diag_log "Spagistan: No damaged/destroyed buildings discovered in server data.";
	false
};
