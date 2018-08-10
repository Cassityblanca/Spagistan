#define COMPONENT database
#define COMPONENT_BEAUTIFIED Spagistan Server Database
#include "\z\spag\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
 #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_DATABASE
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_DATABASE
  #define DEBUG_SETTINGS DEBUG_SETTINGS_DATABASE
#endif

#include "\z\spag\addons\main\script_macros.hpp"
