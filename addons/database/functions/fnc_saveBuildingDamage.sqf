/*
 * Author:Kalthramis
 *	Saves the damage state of buildings and ruins, and logs them to the server, for future use.
 *
 * Arguments:
 * 0: The first argument <STRING>
 * 1: The second argument <OBJECT>
 *
 * Return Value:
 * <BOOL> - writing of both damaged/ruined buildings complete
 *
 * Example:
 * [_caller] call ace_common_fnc_imanexample
 *
 * Public: [Yes/No]
 */

 #include "script_component.hpp"

params ["_caller", "_damaged", "_ruined"];

/* systemChat "Writing building data:"; */


private ["_db", "_doesExist", "_section", "_damagedOld", "_ruinedOld"];

_map = missionNameSpace getVariable "SPAGMAP";
_year = missionNameSpace getVariable "SPAGYEAR";

_section = _map + " " + _year + " - Persistent Building Data";
_db = ["new", "Spagistan Map data"] call OO_INIDBI;
_doesExist = "exists" call _db;

//Backup old data
if(_doesExist) then
{
	_damagedOld = ["read", [_section, "Damaged"]] call _db;
	_ruinedOld = ["read", [_section, "Ruined"]] call _db;

	if( (typeName _damagedOld == "ARRAY") ) then {
		["write", [_section, "Damaged_Backup", _damagedOld]] call _db;
	};
	if( (typeName _ruinedOld == "ARRAY") ) then {
		["write", [_section, "Ruined_Backup", _ruinedOld]] call _db;
	}
};

//Write new data
private ["_damagedPassed", "_ruinsPassed"];
_damagedPassed = ["write", [_section, "Damaged", _damaged]] call _db;
_ruinsPassed = ["write", [_section, "Ruined", _ruined]] call _db;


//Logging
diag_log format ["Spagistan: Damaged write passed? %1", _damagedPassed];
/* systemChat format ["Spagistan: Damaged data written: %1", _damagedPassed]; */
diag_log format ["Spagistan: Ruined write passed? %1", _ruinsPassed];
/* systemChat format ["Spagistan: Ruined data written: %1", _damagedPassed]; */

private ["_return"];
_return = (_damagedPassed && _ruinsPassed);
_return
