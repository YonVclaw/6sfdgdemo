#include "\x\cba\addons\main\script_macros_common.hpp"
#define DFUNC(module) TRIPLES(ADDON,fnc,module)


#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(var1) TRIPLES(ADDON,fnc,var1) = compile preProcessFileLineNumbers 'PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))'
    #undef PREPMAIN
    #define PREPMAIN(var1) TRIPLES(PREFIX,fnc,var1) = compile preProcessFileLineNumbers 'PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))'
#else
    #undef PREP
    #define PREP(var1) ['PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))', 'TRIPLES(ADDON,fnc,var1)'] call SLX_XEH_COMPILE_NEW
    #undef PREPMAIN
    #define PREPMAIN(var1) ['PATHTO_SYS(PREFIX,COMPONENT_F,DOUBLES(functions\fnc,var1))', 'TRIPLES(PREFIX,fnc,var1)'] call SLX_XEH_COMPILE_NEW
#endif

// ACE3 reference macros
#define ACE_MASSTOKG(x) ((round ((x) * 0.1 * (1/2.2046) * 100)) / 100)

#define ACE_PREFIX ace

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

// 6SFG macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// Extension macros
#define EXT "armaforces_mods"
#define EXT_LOG "armaforces_mods_log"

// 6SFG Debug macros
#include "\z\6sfg\addons\main\script_debug.hpp"

// Expanding on CBA macros
#define CFUNC(var) EFUNC(common,var)
#define QCFUNC(var) QUOTE(CFUNC(var))

// Chat macros
#define IS_CMND_AVAILABLE(var,cmnd) if !([var,cmnd] call EFUNC(chat,commandAvailable)) exitWith {}
