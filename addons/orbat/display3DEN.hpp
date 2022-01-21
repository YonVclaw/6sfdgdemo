class ctrlMenuStrip;
class display3DEN
{
    class Controls
    {
        class MenuStrip : ctrlMenuStrip
        {
            class Items
            {
                class 6SFG_Folder {
                    items[] += {"6SFG_Orbat_Settings"};
                };
                class 6SFG_Orbat_Settings
                {
                    text = "6SFG ORBAT Settings";
                    action = "edit3DENMissionAttributes '6SFG_ORBAT_Settings';";
                    picture = "\z\6sfg\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};