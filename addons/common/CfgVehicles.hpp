class cfgVehicles {
    class All;
    class Logic : All {
        class Eventhandlers;
    };
    class GVAR(hideMapObjects) : Logic {
        displayName = "[6SFG] Hide Map Objects";
        class Eventhandlers {
            init = "call cba_xeh_fnc_init";
        };
    };
};