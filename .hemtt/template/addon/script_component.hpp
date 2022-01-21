#define COMPONENT %%addon%%
#include "\z\6SFG\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_%%ADDON%%
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_OTHER
    #define DEBUG_SETTINGS DEBUG_SETTINGS_%%ADDON%%
#endif

#include "\z\6SFG\addons\main\script_macros.hpp"
