#include "script_component.hpp"

[QGVAR(resetGear), {
    params ["_unit"];
    diag_log text format ["[LEGIO] Reseting Gear on %1 [%2]", (name _unit), _unit];
    if ((isNull _unit) || {!alive _unit} || {!local _unit}) exitWith {};

    removeAllWeapons _unit;
    removeHeadgear _unit;
    removeVest _unit;
    removeUniform _unit;
    removeAllAssignedItems _unit;
    removeBackpack _unit;

    [{
        if (missionNamespace getVariable [QEGVAR(assignGear,useLegio), false]) then {
            diag_log text format ["[LEGIO] Calling legio_assignGear_fnc_assignGearMan"];
            _this call legio_assignGear_fnc_assignGearMan;
        } else {
            diag_log text format ["[LEGIO] Calling F_fnc_assignGearMan"];
            _this call F_fnc_assignGearMan;
        };
    }, [_unit], 0.5] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;


GVAR(openEndMission) = false;

if (isServer) then {
    GVAR(zeusCenter) = createCenter sideLogic;
};
