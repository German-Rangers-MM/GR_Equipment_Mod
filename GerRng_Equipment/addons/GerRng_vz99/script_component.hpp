#define COMPONENT GerRng_vz99

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS
#define MAINPREFIX z
#define PREFIX GerRng_Equipment
#ifdef DEBUG_ENABLED_VZ99
    #define DEBUG_MODE_FULL
#endif


//Add all ACE and CBA macros:
#include "\z\ace\addons\main\script_macros.hpp"


#define ACE_PREFIX ace

#define ACEGVAR(module,var) TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var) QUOTE(ACEGVAR(module,var))
#define ACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define DACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define QACEFUNC(var1,var2) QUOTE(DACEFUNC(var1,var2))

#define ACECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,var1),var2))
#define ACELSTRING(var1,var2) QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,var1),var2))

#define CFUNC(var1) EFUNC(core,var1)


#define MISSION_HINT_SIDES [1, west, east, resistance, civilian, 0]
#define MISSION_HINT_RANKS [-99,1,2,3]

#define SERVER_CLIENT_ID 2

#define FADE_LENGTH 0.25
#define FADE_ENABLED 0
#define FADE_DISABLED 0.7
