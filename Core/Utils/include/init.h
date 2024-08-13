#ifndef INIT_H
#define INIT_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>

#include "../../Systems/include/game_system.h"
#include "time.h"

#define MAX_LINE_LENGTH 1024

int Init_All();
void Init_Env(const char *filename);
int Init_Dependancies();
void Init_Global();

void Exit_All();

#endif // INIT_H
