#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ACE_COMMON"};
        author = "Bourbon Warfare";
        authorUrl = "https://github.com/BourbonWarfare/LEGIO";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "ACE_Settings.hpp"
#include "CfgEden.hpp"

class CfgMods {
    class PREFIX {
        dir = "@LEGIO";
        name = "LEGIO";
        picture = QUOTE(PATHTOF(legio_icon_ca.paa));
        hidePicture = "false";
        hideName = "false";
        actionName = "Website";
        action = "https://github.com/BourbonWarfare/LEGIO";
        description = "";
    };
};
