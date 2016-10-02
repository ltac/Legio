#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {QGVAR(mortar), QGVAR(box)};
        weapons[] = {QGVAR(carryWeapon)};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"legio_core"};
        author = "Legio";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/LEGIO";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
