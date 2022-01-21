class Object
{
    // Categories collapsible in "Edit Attributes" window
    class AttributeCategories
    {
        // Category class, can be anything
        class 6sfgMarker
        {
            displayName = "6SFG: Specialist Unit Marker"; // Category name visible in Edit Attributes window
            collapsed = 1; // When 1, the category is collapsed by default
            class Attributes
            {
                // Attribute class, can be anything
                class 6SFG_SpecialistMarker
                {
                    displayName = "Specialist unit icon"; // Name assigned to UI control class Title
                    tooltip = "Pick icon to use for this unit. It is recommended to not overly use markers on individual units."; // Tooltip assigned to UI control class Title
                    property = "6SFG_SpecialistMarker"; // Unique config property name saved in SQM
                    control = "twUnitMarker"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectBrain"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['6SFG_SpecialistMarker',_value,true];";
                    defaultValue = "["""",""""]";
                    wikiType = "[[String]]";
                };
                class 6SFG_OrbatParent
                {
                    property = "6SFG_OrbatParent"; // Unique config property name saved in SQM
                    control = "None"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectBrain"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['6SFG_OrbatParent',_value,true];";
                    defaultValue = "-1";
                };
            };
        };
        class 6SFG_orbat_vehicleCallsign
        {
            displayName = "6SFG: Vehicle ORBAT";
            collapsed = 0;
            class Attributes
            {
                class 6SFG_orbat_vehicleCallsign
                {
                    property = "6SFG_orbat_vehicleCallsign";
                    displayName = "Callsign";
                    tooltip = "Give vehicle a callsign to show on briefing screen.";
                    condition = "objectVehicle";
                    control = "Edit";
                    defaultValue = "''";
                    expression = "_this setVariable ['6SFG_orbat_vehicleCallsign',_value,true];";
                    wikiType = "[[String]]";
                };
                class 6SFG_orbat_team
                {
                    property = "6SFG_orbat_team";
                    displayName = "ORBAT Team";
                    tooltip = "Which team's ORBAT should this vehicle be apart of.";
                    condition = "objectVehicle";
                    control = "6SFG_ORBAT_team";
                    expression = "_this setVariable ['6SFG_orbat_team',_value,true];";
                    defaultValue = "''";
                    value = "''";
                    wikiType = "[[String]]";
                };
                class 6SFG_groupMarker
                {
                    property = "6SFG_groupMarker"; // Unique config property name saved in SQM
                    control = "twGroupMarker"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectVehicle"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['6SFG_groupMarker',_value,true];";//"[_this,['6SFG_groupMarker',_value]] remoteExecCall ['setVariable',0,true];" //"_this setVariable ['6SFG_groupMarker',_value,true];";
                    defaultValue = "'[]'";
                    wikiType = "[[String]]";
                };
                class 6SFG_OrbatParent
                {
                    property = "6SFG_OrbatParent"; // Unique config property name saved in SQM
                    control = "None"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes
                    unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
                    condition = "objectVehicle"; // Condition for attribute to appear (see the table below)
                    expression = "_this setVariable ['6SFG_OrbatParent',_value,true];";//"[_this,['6SFG_OrbatParent',_value]] remoteExecCall ['setVariable',0,true];"; //_this setVariable ['6SFG_OrbatParent',_value,true];";
                    defaultValue = "-1";
                };
            };
        };
    };
};
