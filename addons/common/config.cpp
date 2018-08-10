#include "script_component.hpp"


class CfgPatches {
    class ADDON {
        name = COMPONENT;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"spag_main", "spag_database"};
        author = authorCOMMON;
        authors[] = {"Taepodong", "Kalthramis"};
        url = SPAGLINK;
        VERSION_CONFIG;
    };
};
#include "Cfgs/FactionClasses.hpp"
#include "Cfgs/Markers.hpp"
#include "Cfgs/EditorCategories.hpp"
#include "Cfgs/Settings.hpp"
#include "Cfgs/UnitInsignia.hpp"
#include "Cfgs/EventHandlers.hpp"
#include "Cfgs/Sounds.hpp"
