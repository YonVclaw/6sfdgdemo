class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};


class Extended_Init_EventHandlers {
    class GVAR(hideMapObjects) {
        class ADDON {
            init = QUOTE(_this call FUNC(hideMapObjectsInit));
        };
    };
};

class Extended_Respawn_EventHandlers {
    class CAManBase {
        class ADDON {
            respawn = QUOTE((_this select 0) setVariable [ARR_3(QQGVARMAIN(lastRespawn),time,true)]);
        };
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscDisplayMultiplayerSetup {
        6sfg_slotting = QUOTE(_this call (uiNamespace getVariable 'FUNC(initDisplayMultiplayerSetup)'));
    };
    class RscDisplayDebriefing {
        6sfg_override_end_text = QUOTE(_this call (uiNamespace getVariable 'FUNC(initDisplayDebriefing)'));
    };
};
