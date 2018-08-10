/*
 * Author: Kalthramis
 * Ends the mission Spagistan-style, by freezing all players for a few moments before ending the mission.
 * If given a client-ID, if the client is an admin, it will also save the damage state of buildings for mission persistence.
 *
 * Arguments:
 * 0: Zeus-client number <NUM> (optional)
 *
 * Return Value:
 * <BOOL>
 *
 * Example:
 * [player] call spag_zeus_fnc_moduleEndMission;
 * [""] call spag_zeus_fnc_moduleEndMission;
 * Public: Yes
 */
#include "script_component.hpp"

params ["_unit"];

_caller = _this select 0;

[] remoteExec [QEFUNC(common,freezePlayers), 2];

systemChat "--Ending mission";
if( !isNil _caller && typeName _caller == "OBJECT" && ( (!isMultiplayer) || (admin (clientOwner _caller) == 2)) ) then {
	systemChat "---Saving building data";
	missionNamespace setVariable ["Spag_SavingDone", false];
	[clientOwner _caller] remoteExec [EFUNC(database,saveBuildings), 1];

	waitUntil { getVariable "Spag_SavingDone" == true}
};

["end1"] remoteExec ["bis_fnc_endMissionServer", 2];
true
