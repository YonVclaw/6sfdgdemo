#include "\z\6sfg\addons\common\script_component.hpp"
/*
 * Name: 6SFG_common_fnc_check6SFGVersion
 * Author: Snippers
 *
 * Arguments:
 *  Array - Version to check
 *
 * Return:
 * Boolean
 *
 * Description:
 * Checks if 6SFG Mission version is larger than the input version;
 */

params [
    ["_input",[0,0,0]]
];

private _6sfgVersion = getMissionConfigValue ["6sfg_version",[0,0,0]];

([_6sfgVersion,_input] call EFUNC(common,checkVersionArray));

