#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"spag_main", "spag_common"};
        author = authorCOMMON;
        authors[] = {"Kalthramis"};
        url = SPAGLINK;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
