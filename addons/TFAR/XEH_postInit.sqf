#include "script_component.hpp"

/* ["ace_settingsInitialized", { call FUNC(updateSettings);}] call CBA_fnc_addEventHandler; */

if (hasInterface && isMultiplayer) then {
	[] spawn {
		[ {time > 2 && !(isNull player) }, FUNC(TFARSetup) ] call CBA_fnc_waitUntilAndExecute;
    };
};
