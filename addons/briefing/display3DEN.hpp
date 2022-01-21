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
                    items[] += {"6SFG_Briefing"};
                };
                class 6SFG_Briefing
                {
                    text = "6SFG Briefing Settings";
                    action = "edit3DENMissionAttributes '6SFG_MissionBriefingAttributes';";
                    //picture = "\z\6sfg\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};