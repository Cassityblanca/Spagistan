#include "script_component.hpp"

if (hasInterface && isMultiplayer) then {
	[] spawn {
		[ {time > 2 && !(isNull player) }, FUNC(loadBuildingDamage) ] call CBA_fnc_waitUntilAndExecute;
    };
};
