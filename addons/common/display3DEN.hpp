class ctrlMenuStrip;
class ctrlControlsGroupNoScrollbars;
class ctrlCheckboxToolbar;
class Separator1;

class display3DEN
{
    class Controls
    {
        class MenuStrip : ctrlMenuStrip
        {
            class Items
            {
                items[] += {"6SFG_Folder"};
                class 6SFG_Folder {
                    text = "6SFG";
                    items[] = {"6SFG_Documentation"};
                };
                class 6SFG_Documentation
                {
                    text = "6SFG Wiki"; // engine adds ... to links
                    data = "HelpFeedback";
                    picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
                    weblink = "http://teamonetactical.com/wiki/doku.php?id=6sfg:start";
                    opensNewWindow = 1;
                };
            };
        };
        class Toolbar : ctrlControlsGroupNoScrollbars{
            class Controls {
                class Separator3: Separator1
                {
                    colorBackground[]={0,0,0,0.5};
                    x="33.5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="pixelW";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                };
                class 6SFG_Toolbar_Controls : ctrlControlsGroupNoScrollbars {
                    idc=-1;
                    x="34.5 * (5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                    class Controls
                    {
                        class Garrison: ctrlCheckboxToolbar
                        {
                            idc=-1;
                            onCheckedChanged=QUOTE(GVAR(Garrison) = !GVAR(Garrison));
                            onLoad="uiNamespace setVariable [""6sfg_common_GarrisonControl"",_this select 0]; 6sfg_common_Garrison = false";
                            x="0 *     (    5 * (pixelW * pixelGrid *     0.50))";
                            y=0;
                            h="(    5 * (pixelH * pixelGrid *     0.50))";
                            w="(    5 * (pixelW * pixelGrid *     0.50))";
                            tooltip="6SFG: Toggle garrison on dragging units";
                            textureChecked="\z\6sfg\addons\common\UI\logo_6sfg_small_toolbar_active_ca.paa";
                            textureUnchecked="\z\6sfg\addons\common\UI\logo_6sfg_small_ca.paa";
                            textureFocusedChecked="\z\6sfg\addons\common\UI\logo_6sfg_small_toolbar_active_ca.paa";
                            textureFocusedUnchecked="\z\6sfg\addons\common\UI\logo_6sfg_small_ca.paa";
                            textureHoverChecked="\z\6sfg\addons\common\UI\logo_6sfg_small_toolbar_active_ca.paa";
                            textureHoverUnchecked="\z\6sfg\addons\common\UI\logo_6sfg_small_ca.paa";
                            texturePressedChecked="\z\6sfg\addons\common\UI\logo_6sfg_small_toolbar_active_ca.paa";
                            texturePressedUnchecked="\z\6sfg\addons\common\UI\logo_6sfg_small_ca.paa";
                            textureDisabledChecked="\z\6sfg\addons\common\UI\logo_6sfg_small_toolbar_active_ca.paa";
                            textureDisabledUnchecked="\z\6sfg\addons\common\UI\logo_6sfg_small_ca.paa";
                        };
                    };
                };
            };
        };
    };
};
