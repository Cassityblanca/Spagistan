#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            // CBA
            "cba_ui",
            "cba_xeh",
            "cba_jr"
        };
        author = authorCOMMON;
        url = linkCOMMON;
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@spag";
        name = "Spagistan Offical Modpack";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = linkCOMMON;
        description = "Issue Tracker: https://github.com/Kalthramis/Spagistan/issues";
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgSettings.hpp"
