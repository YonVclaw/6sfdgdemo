class Mission
{
    class 6SFG_ORBAT_Settings
    {
        displayName = "6SFG ORBAT attributes"; // Text visible in the window title as "Edit <displayName>"
        //display = "Display3DENEditAttributesPreview"; // Optional - display for attributes window. Must have the same structure and IDCs as the default Display3DENEditAttributes
        class AttributeCategories
        {
            class 6SFG_ORBATSettings
            {
                displayName = "6SFG: ORBAT"; // Category name visible in Edit Attributes window
                collapsed = 0; // When 1, the category is collapsed by default
                class Attributes
                {
                    class 6SFG_ORBATTracker
                    {
                        property = "6SFG_ORBATTracker";
                        displayName = "Enable map markers for ORBAT";
                        control = "Checkbox";
                        //expression = "missionNamespace setVariable ['6SFG_ORBAT_Tracker',_value];";
                        tooltip = "Use this option to disable elements of the ORBAT being displayed on the map.";
                        defaultValue = false;
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class 6SFG_ORBATTrackerCondition
                    {
                        property = "6SFG_ORBATTrackerCondition";
                        displayName = "Map markers display condition";
                        control = "Edit";
                        //expression = "missionNamespace setVariable ['6SFG_ORBAT_Tracker',_value];";
                        tooltip = "[Advanced] Use this text box to specify a code condition to evaluate to check if the orbat should be drawn. Must return a boolean. e.g. ('ItemGPS' in (assignedItems player)). Do not edit this if you do understand this description. Default value: true";
                        defaultValue = "true";
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class 6SFG_ORBATMarkersFT
                    {
                        property = "6SFG_ORBATMarkersFT";
                        displayName = "Enable fireteam map markers";
                        control = "Checkbox";
                        //expression = "missionNamespace setVariable ['6SFG_ORBAT_MarkersFT',_value];";
                        tooltip = "Use this option to disable drawing members of the current player's fireteam on the map.";
                        defaultValue = false;
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class 6SFG_ORBATMarkersFT_Directional
                    {
                        property = "6SFG_ORBATMarkersFT_Directional";
                        displayName = "Directional fireteam map markers";
                        control = "Checkbox";
                        expression = "missionNamespace setVariable ['6SFG_ORBAT_MarkersFT_Directional',_value,true];";
                        tooltip = "Set whether fireteam map markers are directional or not.";
                        defaultValue = false;
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class 6SFG_ORBATSettings
                    {
                        property = "6SFG_ORBATSettings";
                        control = "ORBATSettings";
                        //expression = "missionNamespace setVariable ['6SFG_ORBAT_Array',_value];";
                        tooltip = "";
                        defaultValue = "[]";
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                    class 6SFG_ORBATRenameFakeAttribute
                    {
                        property = "6SFG_ORBATRenameFakeAttribute";
                        control = "6SFG_ORBAT_Renamer";
                        tooltip = "";
                        defaultValue = "true";
                        condition = "1";
                        wikiType = "[[String]]";
                    };
                };
            };
        };
    };
};
