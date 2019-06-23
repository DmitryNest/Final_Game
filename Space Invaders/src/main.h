#ifndef MAIN_H
#define MAIN_H

#if defined(__MINGW32__)
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif
static const int WINDOW_WIDTH = 448;
static const int WINDOW_HEIGHT = 512;

static const SDL_Rect PLAYER_CLIP = {.x = 0, .y = 48, .w = 26, .h = 16 };
static const SDL_Rect INVADER1_CLIP = {.x = 0, .y = 0, .w = 16, .h = 16 };
static const SDL_Rect INVADER2_CLIP = {.x = 32, .y = 0, .w = 22, .h = 16 };
static const SDL_Rect INVADER3_CLIP = {.x = 76, .y = 0, .w = 24, .h = 16 };
static const SDL_Rect LASER_CLIP = {.x = 0, .y = 64, .w = 6, .h = 12 };
static const SDL_Rect DYING_INVADER_CLIP = {.x = 124, .y = 0, .w = 26, .h = 16 };

struct list* objects;

struct object* player;
struct object* player_laser;

struct object* invaders[55];
struct object* invader_lasers[11];


struct object* mystery_ship;

#endif
