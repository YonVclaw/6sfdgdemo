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
                    items[] += {"6SFG_AutoTest"};
                };
                class 6SFG_AutoTest
                {
                    text = "6SFG Autotest";
                    action = "edit3DENMissionAttributes '6SFG_AutoTestAttributes';";
                    //picture = "\z\6sfg\addons\common\UI\icon_gear_ca";
                };
            };
        };
    };
};