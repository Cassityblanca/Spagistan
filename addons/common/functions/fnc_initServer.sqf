private ["_db", "_dbExists"];

_db = ["new", "Spagistan Map data"] call OO_INIDBI;
_dbExists = "exists" call _db;


Spagistan_Data_Buildings = ["read", [_section, "Damaged"]] call _db;
Spagistan_Data_Ruins = ["read", [_section, "Ruined"]] call _db;

missionNamespace setVariable ["Spagistan_Data_Buildings", Spagistan_Data_Buildings];
missionNamespace setVariable ["Spagistan_Data_Ruins", Spagistan_Data_Ruins];


systemChat format ["This is the server speaking, %1" Spagistan_Data_Buildings];
