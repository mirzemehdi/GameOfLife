#ifndef __SDL_DRAW__
#define __SDL_DRAW__

#include <SDL.h>
#include "cellTable.h"

//!Initialize Renderer, with respect to height and width of table 
//@param renderer
//@param ct This is a table of cells
//@param title This is a title
void SDL_init(SDL_Renderer **renderer,cellTable ct,char *title);
//!Creates a colored point for the cells, if Alive-red, if Dead-black
//@param renderer
//@param ct This is a table of cells
void SDL_draw(SDL_Renderer* renderer,cellTable ct);

#endif