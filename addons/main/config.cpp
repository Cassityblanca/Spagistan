#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        author = authorCOMMON;
        url = linkCOMMON;
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@spag";
        name = "Spagistan Offical Modpack";
        picture = "";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = linkCOMMON;
        description = "Issue Tracker: https://github.com/Kalthramis/Spagistan/issues";
    };
};
