#ifndef SDL_UNTILS__H
#define SDL_UNTILS__H


#include <windows.h>
#include <SDL.h>
#include <string>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>

static SDL_Window* gWindow = NULL;
static SDL_Renderer* gScreen = NULL;
static SDL_Event gEvent ;


const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 512;
const int SCREEN_BPP = 32;

const int COLOR_KEY_R = 167;
const int COLOR_KEY_G = 175;
const int COLOR_KEY_B = 180;

const int RENDER_DRAW_COLOR = 255;

#endif // SDL_UNTILS__H
