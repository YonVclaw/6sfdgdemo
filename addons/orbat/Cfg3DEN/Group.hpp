class Group
{
    // Categories collapsible in "Edit Attributes" window
    class AttributeCategories
    {
        // Category class, can be anything
        class 6sfgMarker
        {
            displayName = "6SFG: Group Marker"; // Category name visible in Edit Attributes window
            collapsed = 1; // When 1, the category is collapsed by default
            class Attributes
            {
                class 6SFG_groupMarker
                {
                    property = "6SFG_groupMarker"; // Unique config property name saved in SQM
                    control = "twGroupMarker"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "object"; // Condition for attribute to appear (see the table below)
                    expression = "[_this,'6SFG_groupMarker',_value] call 6sfg_common_fnc_initGroupVar;";//"[_this,['6SFG_groupMarker',_value]] remoteExecCall ['setVariable',0,true];" //"_this setVariable ['6SFG_groupMarker',_value,true];";
                    defaultValue = "'[]'";
                    wikiType = "[[String]]";
                };
                class 6SFG_OrbatParent
                {
                    property = "6SFG_OrbatParent"; // Unique config property name saved in SQM
                    control = "None"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "object"; // Condition for attribute to appear (see the table below)
                    expression = "[_this,'6SFG_OrbatParent',_value] call 6sfg_common_fnc_initGroupVar;";//"[_this,['6SFG_OrbatParent',_value]] remoteExecCall ['setVariable',0,true];"; //_this setVariable ['6SFG_OrbatParent',_value,true];";
                    defaultValue = "-1";
                };
            };
        };
    };
};
