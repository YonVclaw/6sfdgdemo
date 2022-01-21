#include "script_component.hpp"

class CfgPatches {
    class ADDON
    {
        name = "6SFG: AI";
        author = "Nick";
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"6sfg_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWaypoints.hpp"
#include "CfgModules.hpp"
