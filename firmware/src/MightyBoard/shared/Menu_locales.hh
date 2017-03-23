#ifndef __MENU__LOCALES__
#define __MENU__LOCALES__

#include <avr/pgmspace.h>
#include <string.h>
#include "Model.hh"

#if defined(COOLING_FAN_PWM)
const PROGMEM prog_uchar PWM_FAN_MSG[]  =         "FAN:---";
const PROGMEM prog_uchar PWM_FAN_MAX_MSG[]  =     "MAX";
const PROGMEM prog_uchar PWM_FAN_PERCENT_MSG[]  = "  %";
const PROGMEM prog_uchar PWM_FAN_OFF_MSG[]  =     "OFF";
#endif
const static PROGMEM prog_uchar ON_CELCIUS_MSG[] = "/   C";
const static PROGMEM prog_uchar CELCIUS_MSG[] =    "C    ";
const static PROGMEM prog_uchar BLANK_CHAR_MSG[] = " ";
const static PROGMEM prog_uchar BLANK_CHAR_4_MSG[] = "    ";

const static PROGMEM prog_uchar CLEAR_MSG[]     =  "                    ";

// Note: RepG is adding an extra disable axes on the end....
//       so check the last four bytes and remove the last two
//       if they are 137, 31, 137, 31

#if defined(ZYYX_3D_PRINTER)
#if defined(ZYYX_LEVEL_SCRIPT)

#define LEVEL_PLATE const static uint8_t LevelPlate[] PROGMEM = { \
137,8,153,0,0,0,0,82,101,112,71,32,66,117,105,108,\
100,0,150,0,255,145,0,127,145,1,127,145,2,64,145,3,\
127,145,4,127,132,3,125,1,0,0,20,0,131,4,77,1,\
0,0,20,0,140,0,0,0,0,0,0,0,0,0,0,0,\
0,0,0,0,0,0,0,0,0,155,0,0,0,0,0,0,\
0,0,208,7,0,0,0,0,0,0,0,0,0,0,183,11,\
0,0,24,0,0,160,64,224,1,149,0,0,0,0,84,104,\
105,115,32,119,105,122,97,114,100,32,119,105,108,108,32,114,\
101,115,0,149,1,0,0,0,116,111,114,101,32,102,97,99,\
116,111,114,121,32,99,97,108,105,98,114,97,0,149,1,0,\
0,0,116,105,111,110,32,111,102,32,116,104,101,32,98,117,\
105,108,100,112,108,97,0,149,7,0,0,0,116,101,44,32,\
112,114,101,115,115,32,109,105,100,98,117,116,116,111,110,0,\
149,0,0,0,0,80,108,101,97,115,101,32,114,101,109,111,\
118,101,32,97,110,121,32,112,108,0,149,1,0,0,0,97,\
115,116,105,99,32,114,101,115,105,100,117,101,32,111,110,32,\
116,104,101,0,149,1,0,0,0,32,112,114,105,110,116,32,\
104,101,97,100,32,110,111,122,122,108,101,44,32,0,149,7,\
0,0,0,112,114,101,115,115,32,109,105,100,98,117,116,116,\
111,110,0,149,0,0,0,0,97,100,106,117,115,116,32,98,\
117,105,108,100,112,108,97,116,101,32,116,111,0,149,1,0,\
0,0,32,108,111,119,101,115,116,32,112,111,115,105,116,105,\
111,110,32,111,110,32,0,149,1,0,0,0,97,108,108,32,\
51,32,112,111,105,110,116,115,32,119,105,116,104,32,116,104,\
0,149,7,0,0,0,101,32,116,111,111,108,44,32,112,114,\
101,115,115,32,109,105,100,98,116,110,0,131,4,238,2,0,\
0,20,0,140,0,0,0,0,0,0,0,0,0,0,0,0,\
0,0,0,0,0,0,0,0,155,0,0,0,0,0,0,0,\
0,208,7,0,0,0,0,0,0,0,0,0,0,183,11,0,\
0,24,0,0,160,64,224,1,149,0,0,0,0,70,105,110,\
100,105,110,103,32,116,104,101,32,104,105,103,104,101,115,116,\
32,0,149,3,0,0,0,112,111,105,110,116,46,46,46,0,\
155,0,0,0,0,39,178,255,255,208,7,0,0,0,0,0,\
0,0,0,0,0,76,17,0,0,24,0,0,97,67,128,12,\
155,0,0,0,0,39,178,255,255,0,0,0,0,0,0,0,\
0,0,0,0,0,53,5,0,0,24,0,0,160,64,213,0,\
155,0,0,0,0,39,178,255,255,208,7,0,0,0,0,0,\
0,0,0,0,0,183,11,0,0,24,0,0,160,64,224,1,\
155,195,194,255,255,0,0,0,0,208,7,0,0,0,0,0,\
0,0,0,0,0,152,13,0,0,24,87,35,143,67,128,12,\
155,195,194,255,255,0,0,0,0,0,0,0,0,0,0,0,\
0,0,0,0,0,53,5,0,0,24,0,0,160,64,213,0,\
155,195,194,255,255,0,0,0,0,208,7,0,0,0,0,0,\
0,0,0,0,0,183,11,0,0,24,0,0,160,64,224,1,\
155,195,194,255,255,0,0,0,0,144,1,0,0,0,0,0,\
0,0,0,0,0,53,5,0,0,24,0,0,128,64,213,0,\
149,0,0,0,0,65,100,106,117,115,116,32,98,97,99,107,\
32,108,101,102,116,32,112,111,115,0,149,1,0,0,0,105,\
116,105,111,110,32,106,117,115,116,32,117,110,116,105,108,32,\
76,69,68,0,149,1,0,0,0,32,108,105,103,104,116,115,\
44,32,116,104,101,110,32,112,114,101,115,115,32,0,149,7,\
0,0,0,109,105,100,98,117,116,116,111,110,0,155,195,194,\
255,255,0,0,0,0,208,7,0,0,0,0,0,0,0,0,\
0,0,183,11,0,0,24,0,0,128,64,224,1,155,0,0,\
0,0,0,0,0,0,208,7,0,0,0,0,0,0,0,0,\
0,0,76,17,0,0,24,0,0,49,67,128,12,155,0,0,\
0,0,0,0,0,0,144,1,0,0,0,0,0,0,0,0,\
0,0,53,5,0,0,24,0,0,128,64,213,0,149,0,0,\
0,0,65,100,106,117,115,116,32,98,97,99,107,32,114,105,\
103,104,116,32,112,111,0,149,1,0,0,0,115,105,116,105,\
111,110,32,106,117,115,116,32,117,110,116,105,108,32,76,69,\
0,149,1,0,0,0,68,32,108,105,103,104,116,115,44,32,\
116,104,101,110,32,112,114,101,115,115,0,149,7,0,0,0,\
32,109,105,100,98,117,116,116,111,110,0,155,0,0,0,0,\
0,0,0,0,208,7,0,0,0,0,0,0,0,0,0,0,\
183,11,0,0,24,0,0,128,64,224,1,155,0,0,0,0,\
39,178,255,255,208,7,0,0,0,0,0,0,0,0,0,0,\
76,17,0,0,24,0,0,97,67,128,12,155,0,0,0,0,\
39,178,255,255,144,1,0,0,0,0,0,0,0,0,0,0,\
53,5,0,0,24,0,0,128,64,213,0,149,0,0,0,0,\
65,100,106,117,115,116,32,102,114,111,110,116,32,112,111,115,\
105,116,105,111,0,149,1,0,0,0,110,32,106,117,115,116,\
32,117,110,116,105,108,32,76,69,68,32,108,105,103,0,149,\
1,0,0,0,104,116,115,44,32,116,104,101,110,32,112,114,\
101,115,115,32,109,105,100,98,0,149,7,0,0,0,117,116,\
116,111,110,0,155,0,0,0,0,39,178,255,255,208,7,0,\
0,0,0,0,0,0,0,0,0,183,11,0,0,24,0,0,\
128,64,224,1,132,3,125,1,0,0,20,0,149,0,0,0,\
0,86,101,114,105,102,121,105,110,103,32,99,97,108,105,98,\
114,97,116,105,111,0,149,3,0,0,0,110,32,114,101,115,\
117,108,116,46,46,46,0,131,4,238,2,0,0,20,0,140,\
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
0,0,0,0,143,8,155,0,0,0,0,0,0,0,0,208,\
7,0,0,0,0,0,0,0,0,0,0,53,5,0,0,24,\
0,0,160,64,213,0,155,195,194,255,255,0,0,0,0,208,\
7,0,0,0,0,0,0,0,0,0,0,76,17,0,0,24,\
0,0,49,67,128,12,131,4,238,2,0,0,20,0,143,16,\
139,195,194,255,255,0,0,0,0,208,7,0,0,0,0,0,\
0,0,0,0,0,128,0,0,0,155,0,0,0,0,39,178,\
255,255,208,7,0,0,0,0,0,0,0,0,0,0,152,13,\
0,0,24,87,35,143,67,128,12,131,4,238,2,0,0,20,\
0,143,24,139,0,0,0,0,39,178,255,255,160,15,0,0,\
0,0,0,0,0,0,0,0,128,0,0,0,144,8,137,31,\
150,100,255,154,0,137,31};

#define LEVEL_PLATE_LEN 1495 //93 rader x16 bytes + 7

#else

#define LEVEL_PLATE const static uint8_t LevelPlate[] PROGMEM = { 137,31};
#define LEVEL_PLATE_LEN 2

#endif // ZYYX_LEVEL_SCRIPT

#else // ZYYX_3D_PRINTER

#ifndef XY_MIN_HOMING

// Home XY-max

#define LEVEL_PLATE const static uint8_t LevelPlate[] PROGMEM = { 137,  16,  153,  0,  0,  0,  0,  82,  101,  112,  71,  32,  66,  117,  105,  108,  100,  0,  150,  0,  255,  131,  4,  136,  0,  0,  0,  20,  0,  140,  0,  0,  0,  0,  0,  0,  0,  0,  96,  240,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  155,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  165,  28,  0,  0,  24,  0,  0,  32,  65,  149,  4,  132,  3,  105,  1,  0,  0,  20,  0,  131,  4,  220,  5,  0,  0,  20,  0,  144,  31,  139,  0,  0,  0,  0,  0,  0,  0,  0,  160,  15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  128,  0,  0,  0,  155,  0,  0,  0,  0,  0,  0,  0,  0,  164,  15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  106,  10,  0,  0,  24,  10,  215,  35,  60,  170,  1,  155,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  165,  28,  0,  0,  24,  246,  40,  32,  65,  149,  4,  137,  27,  149,  0,  0,  0,  0,  66,  121,  32,  104,  97,  110,  100,  32,  109,  111,  118,  101,  32,  116,  104,  101,  32,  101,  120,  45,  0,  149,  1,  0,  0,  0,  116,  114,  117,  100,  101,  114,  32,  116,  111,  32,  100,  105,  102,  102,  101,  114,  101,  110,  116,  32,  0,  149,  1,  0,  0,  0,  112,  111,  115,  105,  116,  105,  111,  110,  115,  32,  111,  118,  101,  114,  32,  116,  104,  101,  32,  32,  0,  149,  7,  0,  0,  0,  98,  117,  105,  108,  100,  32,  112,  108,  97,  116,  102,  111,  114,  109,  46,  46,  46,  46,  0,  149,  0,  0,  0,  0,  65,  100,  106,  117,  115,  116,  32,  116,  104,  101,  32,  115,  112,  97,  99,  105,  110,  103,  32,  32,  0,  149,  1,  0,  0,  0,  98,  101,  116,  119,  101,  101,  110,  32,  116,  104,  101,  32,  101,  120,  116,  114,  117,  100,  101,  114,  0,  149,  1,  0,  0,  0,  110,  111,  122,  122,  108,  101,  32,  97,  110,  100,  32,  112,  108,  97,  116,  102,  111,  114,  109,  32,  0,  149,  7,  0,  0,  0,  119,  105,  116,  104,  32,  116,  104,  101,  32,  107,  110,  111,  98,  115,  46,  46,  46,  0,  149,  0,  0,  0,  0,  117,  110,  100,  101,  114,  32,  116,  104,  101,  32,  112,  108,  97,  116,  102,  111,  114,  109,  32,  32,  0,  149,  1,  0,  0,  0,  97,  110,  100,  32,  97,  32,  115,  104,  101,  101,  116,  32,  111,  102,  32,  112,  97,  112,  101,  114,  0,  149,  1,  0,  0,  0,  112,  108,  97,  99,  101,  100,  32,  98,  101,  116,  119,  101,  101,  110,  32,  116,  104,  101,  32,  32,  0,  149,  7,  0,  0,  0,  112,  108,  97,  116,  102,  111,  114,  109,  32,  97,  110,  100,  32,  116,  104,  101,  46,  46,  46,  0,  149,  0,  0,  0,  0,  110,  111,  122,  122,  108,  101,  46,  32,  87,  104,  101,  110,  32,  121,  111,  117,  32,  97,  114,  101,  0,  149,  1,  0,  0,  0,  100,  111,  110,  101,  44,  32,  112,  114,  101,  115,  115,  32,  116,  104,  101,  32,  32,  32,  32,  32,  0,  149,  7,  0,  0,  0,  99,  101,  110,  116,  101,  114,  32,  98,  117,  116,  116,  111,  110,  46,  0,  137,  31,  137,  31 };
#else

// Home XY-min

#define LEVEL_PLATE const static uint8_t LevelPlate[] PROGMEM = { 137,  8,  153,  0,  0,  0,  0,  82,  101,  112,  71,  32,  66,  117,  105,  108,  100,  0,  150,  0,  255,  131,  3,  105,  1,  0,  0,  20,  0,  131,  4,  136,  0,  0,  0,  20,  0,  140,  0,  0,  0,  0,  0,  0,  0,  0,  48,  248,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  155,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  165,  28,  0,  0,  24,  0,  0,  160,  64,  149,  4,  131,  4,  220,  5,  0,  0,  20,  0,  144,  31,  139,  0,  0,  0,  0,  0,  0,  0,  0,  160,  15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  128,  0,  0,  0,  155,  0,  0,  0,  0,  0,  0,  0,  0,  164,  15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  165,  28,  0,  0,  24,  10,  215,  35,  60,  149,  4,  155,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  160,  15,  0,  0,  24,  246,  40,  32,  65,  128,  2,  137,  27,  149,  0,  0,  0,  0,  66,  121,  32,  104,  97,  110,  100,  32,  109,  111,  118,  101,  32,  116,  104,  101,  32,  101,  120,  45,  0,  149,  1,  0,  0,  0,  116,  114,  117,  100,  101,  114,  32,  116,  111,  32,  100,  105,  102,  102,  101,  114,  101,  110,  116,  32,  0,  149,  1,  0,  0,  0,  112,  111,  115,  105,  116,  105,  111,  110,  115,  32,  111,  118,  101,  114,  32,  116,  104,  101,  32,  32,  0,  149,  7,  0,  0,  0,  98,  117,  105,  108,  100,  32,  112,  108,  97,  116,  102,  111,  114,  109,  46,  46,  46,  46,  0,  149,  0,  0,  0,  0,  65,  100,  106,  117,  115,  116,  32,  116,  104,  101,  32,  115,  112,  97,  99,  105,  110,  103,  32,  32,  0,  149,  1,  0,  0,  0,  98,  101,  116,  119,  101,  101,  110,  32,  116,  104,  101,  32,  101,  120,  116,  114,  117,  100,  101,  114,  0,  149,  1,  0,  0,  0,  110,  111,  122,  122,  108,  101,  32,  97,  110,  100,  32,  112,  108,  97,  116,  102,  111,  114,  109,  32,  0,  149,  7,  0,  0,  0,  119,  105,  116,  104,  32,  116,  104,  101,  32,  107,  110,  111,  98,  115,  46,  46,  46,  0,  149,  0,  0,  0,  0,  117,  110,  100,  101,  114,  32,  116,  104,  101,  32,  112,  108,  97,  116,  102,  111,  114,  109,  32,  32,  0,  149,  1,  0,  0,  0,  97,  110,  100,  32,  97,  32,  115,  104,  101,  101,  116,  32,  111,  102,  32,  112,  97,  112,  101,  114,  0,  149,  1,  0,  0,  0,  112,  108,  97,  99,  101,  100,  32,  98,  101,  116,  119,  101,  101,  110,  32,  116,  104,  101,  32,  32,  0,  149,  7,  0,  0,  0,  112,  108,  97,  116,  102,  111,  114,  109,  32,  97,  110,  100,  32,  116,  104,  101,  46,  46,  46,  0,  149,  0,  0,  0,  0,  110,  111,  122,  122,  108,  101,  46,  32,  87,  104,  101,  110,  32,  121,  111,  117,  32,  97,  114,  101,  0,  149,  1,  0,  0,  0,  100,  111,  110,  101,  44,  32,  112,  114,  101,  115,  115,  32,  116,  104,  101,  32,  32,  32,  32,  32,  0,  149,  7,  0,  0,  0,  99,  101,  110,  116,  101,  114,  32,  98,  117,  116,  116,  111,  110,  46,  0,  137,  31 };

#endif

#define LEVEL_PLATE_LEN 573

#endif // ZYYX_3D_PRINTER

#if !defined(PLATFORM_SPLASH1_MSG)
#warning "Building with no PLATFORM_SPLASH1_MSG defined."
const static PROGMEM prog_uchar SPLASH1_MSG[] = "      Sailfish      ";
#else
const static PROGMEM prog_uchar SPLASH1_MSG[] = PLATFORM_SPLASH1_MSG;
#endif

#if !defined(HEATERS_ON_STEROIDS)
const static PROGMEM prog_uchar SPLASH2_MSG[] = "--- Thing 32084 ----";
#else
const static PROGMEM prog_uchar SPLASH2_MSG[] = "-- Heater Special --";
#endif

#if defined(__AVR_ATmega2560__)
const static PROGMEM prog_uchar SPLASH3_MSG[] = "ATmega 2560 " DATE_STR;
#else
const static PROGMEM prog_uchar SPLASH3_MSG[] = "ATmega 1280 " DATE_STR;
#endif

const static PROGMEM prog_uchar SPLASH4_MSG[] = "Sailfish v" VERSION_STR " r" VCS_VERSION_STR;

#include "locale.hh"

#endif // __MENU__LOCALES__
