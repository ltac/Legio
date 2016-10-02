#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"legio_core","A3_UI_F"};
        author = "Legio";
        authors[] = {"AACO"};
        authorUrl = "https://github.com/BourbonWarfare/LEGIO";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Displays.hpp"
