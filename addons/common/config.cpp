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

#include "Cfgs/CfgFactionClasses.hpp"
#include "Cfgs/CfgMarkers.hpp"
#include "Cfgs/CfgEditorCategories.hpp"
#include "Cfgs/CfgSettings.hpp"
#include "Cfgs/CfgUnitInsignia.hpp"
#include "Cfgs/CfgEventHandlers.hpp"
#include "Cfgs/CfgModules.hpp"
