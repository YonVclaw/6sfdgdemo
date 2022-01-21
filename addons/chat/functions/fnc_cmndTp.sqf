#include "\z\6sfg\addons\chat\script_component.hpp"
/*
 * Name = 6SFG_chat_fnc_cmndTp
 * Author = Freddo
 *
 * Syntaxes:
 * #tp <player> - Teleports to target player
 * #tp <group>  - Teleports to group leader (must be same side)
 *
 * Return Value:
 * Void
 *
 * Description:
 * See Syntaxes
 */

IS_CMND_AVAILABLE(GVAR(tpUsage),"#tp");

params [["_name",""]];

if (_name isEqualTo "") exitWith {
    systemChat "6SFG Error: No argument passed. Use #tp <player> or <group>";
};

private _unit = [_name] call FUNC(findMatch);

if (isNull _unit) then {
    private _side = side CURUNIT;
    private _grpArr = allGroups select {
        _side isEqualTo side _x &&
        [_name, groupId _x] call BIS_fnc_inString
    };
    if (count _grpArr isEqualTo 1) then {
        _unit = leader (_grpArr # 0);
    };
};

if (!isNull _unit) then {
    if (vehicle _unit != _unit) then {
        CURUNIT moveInAny vehicle _unit;

        if !(CURUNIT in vehicle _unit) then {
            systemChat FORMAT_1("6SFG: %1's vehicle is full", name _unit);
        } else {
            systemChat FORMAT_1("6SFG: Teleported into %1's vehicle", name _unit);
        };
    } else {
        private _pos = _unit getRelPos [3, 180];
        CURUNIT setDir (getDir _unit);
        CURUNIT setPos _pos;
        systemChat FORMAT_1("6SFG: Teleported to %1", name _unit);
    };
} else {
    systemChat FORMAT_1("6SFG Error: No player/group containing %1, or more than one found.", str _name);
};
