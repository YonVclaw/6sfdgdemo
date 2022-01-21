/*
 * Name: 6SFG_common_fnc_sideTohexColor
 * Author: Snippers
 *
 * Arguments:
 * side
 *
 * Return:
 * array: color array
 *
 * Description:
 * Will return the color of the inputted side.
 */

//Cache vars for speed
if (isNil "6sfg_common_blufor_color") then {
    6sfg_common_blufor_color = [blufor] call bis_fnc_sideColor;
    6sfg_common_opfor_color = [opfor] call bis_fnc_sideColor;
    6sfg_common_indep_color = [independent] call bis_fnc_sideColor;
    6sfg_common_civ_color = [civilian] call bis_fnc_sideColor;
    6sfg_common_empty_color = [sideUnknown] call bis_fnc_sideColor;
};
if (isNil "6sfg_common_blufor_hex_color") then {
    6sfg_common_blufor_hex_color = 6sfg_common_blufor_color call BIS_fnc_colorRGBtoHTML;
    6sfg_common_opfor_hex_color = 6sfg_common_opfor_color call BIS_fnc_colorRGBtoHTML;
    6sfg_common_indep_hex_color = 6sfg_common_indep_color call BIS_fnc_colorRGBtoHTML;
    6sfg_common_civ_hex_color = 6sfg_common_civ_color call BIS_fnc_colorRGBtoHTML;
    6sfg_common_empty_hex_color = 6sfg_common_empty_color call BIS_fnc_colorRGBtoHTML;
};
switch _this do {
    case blufor: {6sfg_common_blufor_hex_color};
    case opfor: {6sfg_common_opfor_hex_color};
    case independent: {6sfg_common_indep_hex_color};
    case civilian: {6sfg_common_civ_hex_color};
    default {6sfg_common_empty_hex_color};
};
