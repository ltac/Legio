#include "script_component.hpp"

if ((!hasInterface) || {isNull player}) exitWith {};

params ["_profileName", "_diaryEntry"];

if (!(player diarySubjectExists "LEGIO")) then {
    player createDiarySubject ["LEGIO", "LEGIO"];
};
player createDiaryRecord ["LEGIO", [format ["Mod Check: %1", _profileName], _diaryEntry]];
