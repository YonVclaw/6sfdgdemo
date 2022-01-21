#include "script_component.hpp"

class CfgPatches {
    class ADDON
    {
        name = "6SFG: Briefing";
        author = "Snippers";
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"6sfg_common"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgDiary.hpp"
#include "CfgEventHandlers.hpp"

#include "display3DEN.hpp"

class 6SFG_autotest {
    class GVAR(test) {
        code = QUOTE([] call FUNC(testBriefings));
    };
};
