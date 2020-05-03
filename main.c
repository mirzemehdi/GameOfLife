#include "game.h"
#include "board_drawer.h"
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include "draw_sdl.h"
#include <stdlib.h>
#include <time.h>


void consoleDraw(int optionGame){


	arena ar=A_new(30,30); //boundaries of table
	cellTable ct=CT_init(ar); //2D cell Table within arena
	
	//Initialize alive cells for starting
	CT_makeCellAliveDead(&ct,4,23,1);
	CT_makeCellAliveDead(&ct,5,23,1);
	CT_makeCellAliveDead(&ct,6,23,1);
	CT_makeCellAliveDead(&ct,6,24,1);
	CT_makeCellAliveDead(&ct,5,25,1);


	//Creating game with given table and option
	game g=G_create(ct,optionGame);
	int sleepTimeMilliSec=50;
	//Starts the game .Repeats an algoritm in table each timeUnit
	
	//This is function from board_drawer lib which clears screen and hides cursor
	clearScreenHideCursor();
	for (int i = 0;; ++i)
	{
		//This is function from board_drawer lib which draws given table in console
		draw(g.table);
		usleep(1000*sleepTimeMilliSec);
		printf("\n");
		G_updateTable(g);
	} 
}

void sdlDraw(int optionGame){

	//Drawing SDL
	int nb_rows=500;
	int nb_cols=500;
	arena ar=A_new(nb_rows,nb_cols); //boundaries of table
	cellTable ct=CT_init(ar); //2D cell Table within arena
	
	srand(time(NULL));
	// Initialize random alive cells for starting
	for (int i = 0; i < 23000; ++i)
	{
		int row=rand()%nb_rows;
		int col=rand()%nb_cols;

		CT_makeCellAliveDead(&ct,row,col,1);
	}



	//Creating game with given table and option
	game g=G_create(ct,optionGame);
	int sleepTimeMilliSec=10;
	//Starts the game .Repeats an algoritm in table each timeUnit

	SDL_Renderer *renderer;
	SDL_init(&renderer,ct,"Game of Life");
	
	bool quit = false;
	while (!quit)
	{
		SDL_Event event;
		while (!quit && SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_QUIT:
				quit = true;
				break;
			}
		}
		SDL_draw(renderer,g.table);
		usleep(1000*sleepTimeMilliSec);
		G_updateTable(g);
		SDL_RenderPresent(renderer);
	}
	SDL_Quit();
}

int main(int argc, char const *argv[])
{

	int optionGame;
	printf("Please, give the option value you wanna run\n");
	printf("(1) Clipped\n");
	printf("(2) Circular\n");
	printf("Option: ");
	scanf("%d",&optionGame);


	//Option 1 for clipped version , option 2 for circular
	if (optionGame!=1 && optionGame!=2){
		printf("Wrong option\n");
		return 0;
	}




	int optionOutput;
	printf("You want to see output in console or with SDL library\n");
	printf("(1) Console\n");
	printf("(2) SDL library\n");
	printf("Option: ");
	scanf("%d",&optionOutput);


	//Option 1 for console version , option 2 for sdl lib

	if (optionOutput==1)
		consoleDraw(optionGame);
	else if (optionOutput==2)
		sdlDraw(optionGame);
	else{
		printf("Wrong option\n");
		return 0;
	}


	return 0;
}
