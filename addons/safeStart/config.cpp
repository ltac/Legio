#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"legio_core"};
        author = "Legio";
        authors[] = {"PabstMirror"};
        authorUrl = "https://github.com/BourbonWarfare/LEGIO";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "gui_safeStart.hpp"

class ACE_Settings {
    class GVAR(showTimer) {
        category = QUOTE(PREFIX);
        displayName = "Legio: Show SafeStart Timer";
        description = "Show the safe start timer";
        typeName = "BOOL";
        value = 1;
        isClientSettable = 1;
    };
    class GVAR(enabled) {
        typeName = "BOOL";
        value = 0;
    };
};
