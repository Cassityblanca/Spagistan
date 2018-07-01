#include "script_component.hpp"
#include "CfgFactionClasses.hpp"

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

#include "CfgMarkers.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgSettings.hpp"
#include "CfgUnitInsignia.hpp"
