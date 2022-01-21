#include "script_component.hpp"

class CfgPatches {
    class ADDON
    {
        name = "6SFG: ORBAT";
        author = "Snippers, Nick, Head and Bear";
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"6sfg_common"};
        VERSION_CONFIG;
    };
};

#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"

#include "display3DEN.hpp"
