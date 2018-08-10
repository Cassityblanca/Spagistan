#include "script_component.hpp"

if (hasInterface) then {
	[] spawn {
		[ {time > 2 && !(isNull player) }, FUNC(initClient) ] call CBA_fnc_waitUntilAndExecute;
    };
};

if(isMultiplayer && isServer) then{
	[] spawn {
		[ {time > 2 }, FUNC(initServer) ] call CBA_fnc_waitUntilAndExecute;
	};

};
