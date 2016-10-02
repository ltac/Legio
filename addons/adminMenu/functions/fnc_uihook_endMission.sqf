#include "script_component.hpp"

params ["_side"];
TRACE_1("params",_side);

if (!GVAR(openEndMission)) exitWith {TRACE_1("locked", GVAR(openEndMission));};

private _debugMsg = format ["Ending mission for winning side %1", _side];

["legio_adminMsg", [_debugMsg, profileName, "#ALL"]] call CBA_fnc_globalEvent;

[_side] remoteExecCall [QFUNC(endMission), 0];
