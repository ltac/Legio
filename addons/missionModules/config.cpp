#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(zeus_missionHint), QGVAR(zeus_globalSetSkill), QGVAR(sideMarker)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"legio_core"};
        author = "Legio";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/LEGIO";
        VERSION_CONFIG;
    };
};

#include "ACE_Settings.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "UI_RscAttributes.hpp"
