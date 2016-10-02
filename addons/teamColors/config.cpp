#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"legio_core"};
        author = "Legio";
        authors[] = {"AACO"};
        authorUrl = "https://github.com/BourbonWarfare/LEGIO";
        VERSION_CONFIG;
    };
};

#include "CfgEden.hpp"
#include "CfgEventHandlers.hpp"
