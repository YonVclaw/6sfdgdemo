#include "script_component.hpp"

class CfgPatches {
    class ADDON
    {
        name = "6SFG: Chat commands";
        author = "Freddo";
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"6sfg_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventhandlers.hpp"
