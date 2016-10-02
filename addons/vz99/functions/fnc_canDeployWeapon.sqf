/*
 * Author: PabstMirror
 * Tests if player can deploy the weapon
 *
 * Arguments:
 * 0: Target (player) <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * <BOOL>
 *
 * Example:
 * [player, player] call legio_vz99_fnc_canDeployWeapon;
 *
 * Public: No
 */
#include "script_component.hpp"

params ["", "_player"];

((secondaryWeapon _player) == QGVAR(carryWeapon))

