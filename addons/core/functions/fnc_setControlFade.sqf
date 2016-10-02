/*
 * Author: AACO
 * Function used to fade (in/out) an array of controls
 * Note: this function needs to be called from a UI execution environment (where serialization is disabled)
 *
 * Arguments:
 * 0: Should the control be faded in (true) or out (false) <BOOL>
 * 1: Array of controls to apply the fade to <ARRAY>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [true, [_ctrlText]] call legio_core_fnc_setControlFade; // fade control in
 * [false, [_ctrlText, _ctrlSet]] call legio_core_fnc_setControlFade; // fade control out
 *
 * Public: Yes
 */

#include "script_component.hpp"
TRACE_1("params",_this);

params ["_status", "_controls"];

private _fade = if (_status) then { FADE_ENABLED } else { FADE_DISABLED };

{
    _x ctrlEnable _status;
    _x ctrlSetFade _fade;
    _x ctrlCommit FADE_LENGTH;
} forEach _controls;
