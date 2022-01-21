#include "script_component.hpp"

class CfgPatches {
    class ADDON
    {
        name = "6SFG: Teleport";
        author = "Head";
        url = URL;
        units[] = {QGVAR(module),QGVAR(deploy)};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"6sfg_common"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModules.hpp"


class CfgWaypoints
{
    class 6sfg
    {
        displayName = "6SFG";
        class Paradrop
        {
            displayName = "Paradrop";
            file = "\z\6sfg\addons\teleport\functions\fnc_paradropWaypoint.sqf";
            icon = "\a3\air_f_beta\Parachute_01\Data\UI\map_parachute_01_ca.paa";
            class Attributes
            {
            };
        };
    };
};
