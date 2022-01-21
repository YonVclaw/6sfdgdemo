
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

class Extended_DisplayLoad_EventHandlers {
    class RscCustomInfoMiniMap {
        6sfg_orbat = QUOTE(((_this select 0) displayCtrl 101) ctrlAddEventHandler [ARR_2('draw',{_this call FUNC(draw)})]);
    };
    class RscDiary {
        6sfg_orbat = QUOTE(((_this select 0) displayCtrl 51) ctrlAddEventHandler [ARR_2('draw',{_this call FUNC(draw)})]);
    };
};
