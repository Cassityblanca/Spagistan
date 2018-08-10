_time = time + 1;
waituntil {!([] call bis_fnc_isLoading) && time > _time};

//client
missionNamespace setVariable ["SPAGMAP", "Malden"];
missionNamespace setVariable ["SPAGYEAR", "2018"];
systemChat "Global name spsaces set correctly, client.";

call EFUNC(database,loadBuildingDamage);
