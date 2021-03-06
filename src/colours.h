#pragma once
#include <pebble.h>
  
#ifdef PBL_COLOR
  #define COLOUR_HEADER GColorBlue
  #define COLOUR_HEADER_TEXT GColorWhite
  #define COLOUR_WINDOW GColorLightGray
  #define COLOUR_MENU_BACKGROUND GColorLightGray
  #define COLOUR_MENU_FOREGROUND GColorBlue
  #define COLOUR_MENU_HIGHLIGHT_BACKGROUND GColorBlue
  #define COLOUR_MENU_HIGHLIGHT_FOREGROUND GColorFromHEX(0xFFFF00)
  
  #define COLOUR_BULLET GColorFromHEX(0xE31837)
  #define COLOUR_LIMITED GColorChromeYellow
  #define COLOUR_LOCAL GColorDarkGray
  #define COLOUR_SHUTTLE GColorLightGray
  
  #define COLOUR_ROUTE_OUTLINE GColorClear
  #define COLOUR_ROUTE_FILLED GColorDarkGray
  #define COLOUR_ROUTE_EMPTY GColorLightGray
#else
  #define COLOUR_HEADER GColorBlack
  #define COLOUR_HEADER_TEXT GColorWhite
  #define COLOUR_WINDOW GColorWhite
  #define COLOUR_MENU_BACKGROUND GColorWhite
  #define COLOUR_MENU_FOREGROUND GColorBlack
  #define COLOUR_MENU_HIGHLIGHT_BACKGROUND GColorBlack
  #define COLOUR_MENU_HIGHLIGHT_FOREGROUND GColorWhite
  
  #define COLOUR_ROUTE_OUTLINE GColorBlack
  #define COLOUR_ROUTE_FILLED GColorBlack
  #define COLOUR_ROUTE_EMPTY GColorWhite
#endif
