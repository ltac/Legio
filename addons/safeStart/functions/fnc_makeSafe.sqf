//legio_safeStart_fnc_makeSafe

#include "script_component.hpp"

if (!isServer) exitWith {};

missionNamespace setVariable [QGVAR(startTime_PV), dayTime, true];
["legio_safeStartOn", []] call CBA_fnc_globalEvent;
