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

#include "ACE_Settings.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgEden.hpp"
