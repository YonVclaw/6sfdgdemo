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
                    items[] += {"6SFG_ACRE2"};
                };
                class 6SFG_ACRE2
                {
                    text = "6SFG ACRE2 Settings";
                    action = "edit3DENMissionAttributes '6SFG_MissionAcre2Attributes';";
                    //picture = "\z\6sfg\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};