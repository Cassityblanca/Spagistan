#include "script_component.hpp"


class CfgPatches {
    class ADDON {
        name = COMPONENT;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"spag_main"};
        author = authorCOMMON;
        authors[] = {"Taepodong", "Kalthramis"};
        url = SPAGLINK;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModules.hpp"
#include "CfgDialogs.hpp"
