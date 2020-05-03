#ifndef __SDL_DRAW__
#define __SDL_DRAW__

#include <SDL.h>
#include "cellTable.h"


void SDL_init(SDL_Renderer **renderer,cellTable ct,char *title);
void SDL_draw(SDL_Renderer* renderer,cellTable ct);

#endif