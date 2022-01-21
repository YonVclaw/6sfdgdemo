class RscStandardDisplay;
class RscText;
class RscTitle;
class RscToolboxButton;
class RscCombo;
class RscButtonMenu;
class RscButtonMenuCancel: RscButtonMenu {};
class RscButtonMenuOK: RscButtonMenu {};
class RscBackgroundGUI;
class RscBackgroundGUITop;
class RscPicture;
class RscSlider;
class RscDisplayAttributes {
    class Controls {
        class Background;
        class Title;
        class Content;
        class ButtonOK;
        class ButtonCancel;
    };
};
class RscControlsGroupNoScrollbars;
class RscAttributeText: RscControlsGroupNoScrollbars
{
    class controls
    {
        class Title;
    };
};
#include "6SFG_RscAttributeLoadout.hpp"
#include "6SFG_RscAttributeFaction.hpp"
#include "6SFG_RscAttributeRetroactive.hpp"
#include "RscDisplayArsenal.hpp"
#include "6SFG_RscDisplayAttributesModuleAIGear.hpp"
#include "gearSelector.hpp"
