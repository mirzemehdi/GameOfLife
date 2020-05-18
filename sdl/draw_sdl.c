#include "draw_sdl.h"
#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include  <windows.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>
#include <time.h>
#include <SDL.h>
#include "cellTable.h"


/*! \file draw_sdl.c
    \brief 
*/

void SDL_init(SDL_Renderer** renderer,cellTable ct,char *title){

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		fprintf(stderr,"Problem can not init SDL2 \n");

	SDL_Window* window = SDL_CreateWindow(title,
										  SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
										  ct.arena.nb_cols, ct.arena.nb_rows, SDL_WINDOW_SHOWN|SDL_WINDOW_ALLOW_HIGHDPI);
	*renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
	assert (renderer != NULL);

}


void SDL_draw(SDL_Renderer* renderer,cellTable ct){
	//SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	for(int i=0; i<ct.arena.nb_rows; ++i)
	{
		for(int j= 0; j<ct.arena.nb_cols; ++j){
			if (ct.table[i][j].isAlive)
				SDL_SetRenderDrawColor(renderer, 255,0,0,0);
			else
				SDL_SetRenderDrawColor(renderer, 0,0,0,0);

			SDL_RenderDrawPoint(renderer,j,i);
		}
				
	}
}





