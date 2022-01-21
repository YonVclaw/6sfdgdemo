#include "\z\6sfg\addons\orbat\script_component.hpp"

params["_entity"];

//convert entity to group.
if (_entity isEqualType objNull) then {_entity = group _entity;};

private _parentId = _entity getVariable ["6SFG_OrbatParent", -1];

/*OrbatSettings_Array = [
            [west,[
                    [0,"1PLT","z\6sfg\addons\orbat\textures\yellow.paa","z\6sfg\addons\orbat\textures\modif_3dot.paa"],
                    [
                        [[1,"A","z\6sfg\addons\orbat\textures\red_inf.paa","z\6sfg\addons\orbat\textures\modif_dot.paa"],[]]
                    ]
                   ]],
            [east,[
                    [2,"2PLT","z\6sfg\addons\orbat\textures\yellow.paa","z\6sfg\addons\orbat\textures\modif_3dot.paa"],
                    [
                        [[3,"A","z\6sfg\addons\orbat\textures\red_inf.paa","z\6sfg\addons\orbat\textures\modif_dot.paa"],[]]
                    ]
                   ]]
        ];*/

if (isNil QGVAR(orbatRawData)) then {
    GVAR(orbatRawData) = getMissionConfigValue ["6SFG_ORBATSettings",[]];
    if (GVAR(orbatRawData) isEqualType "") then { GVAR(orbatRawData) = call compile GVAR(orbatRawData)};
};

private _type = 0;
if (count GVAR(orbatRawData)  > 0) then {
    _type = (GVAR(orbatRawData) select 0) select 0;
};

if (_type isEqualType "") then {
    _type = faction (leader _entity); 
} else {
    _type = side _entity; 
};


private _parentEntry = [];

//Use function for recursive find.
6sfg_orbat_fnc_findOrbatParentHelper = {
    params["_data","_children"];

    _data params ["_id"];
    if (_id isEqualTo _parentId) exitWith {_parentEntry = _this};

    {
        _x call 6sfg_orbat_fnc_findOrbatParentHelper;
    } forEach _children;
};


{
    _x params ["_condition", "_rootEntry"];
    if (_condition isEqualTo _type) exitWith {
        if (_parentId isEqualTo -1) then {
            _parentEntry = _rootEntry;
        } else {
            _rootEntry call 6sfg_orbat_fnc_findOrbatParentHelper;
        };
    };
} forEach GVAR(orbatRawData);

_parentEntry