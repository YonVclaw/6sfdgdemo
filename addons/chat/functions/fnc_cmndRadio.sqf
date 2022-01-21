#include "\z\6sfg\addons\chat\script_component.hpp"
/*
 * Name = 6SFG_chat_fnc_cmndRadio
 * Author = Freddo
 *
 * Syntaxes:
 * #spec <radioType> - Assigns radio
 *
 * Return Value:
 * Void
 *
 * Description:
 * See Syntaxes
 */

IS_CMND_AVAILABLE(GVAR(radioUsage),"#radio");

params [["_name", ""]];

if (_name isEqualTo "") exitWith {systemChat "6SFG Error: No argument passed. Command usage: #radio <radioType>"};

private _configs = "true" configClasses (configfile >> "CfgAcreComponents");
private _radios = _configs select {
    getNumber (_x >> "type") isEqualTo 5 &&
    !(getText (_x >> "name") isEqualTo "ACRE Base Radio") &&
    {[_name, configName _x] call BIS_fnc_inString || {[_name, getText (_x >> "name")] call BIS_fnc_inString}}
};

if (_radios isEqualTo []) exitWith {
    systemChat FORMAT_1("6SFG Error: Unable to find radio containing %1", str _name);
};
if (count _radios > 1) exitWith {
    systemChat FORMAT_1("6SFG Error: More than one radio found containing %1", str _name);
};

private _radioType = configName (_radios # 0);
private _radioName = getText ((_radios # 0) >> "name");

if (CURUNIT canAdd _radioType) then {
    CURUNIT addItem _radioType;
    systemChat FORMAT_1("6SFG: Added %1 to inventory", _radioName);
} else {
    systemChat FORMAT_1("6SFG Error: Not enough room for %1 in inventory", _radioName);
};
