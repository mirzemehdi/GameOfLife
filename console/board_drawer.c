#include "board_drawer.h"
#include "cellTable.h"
#include <stdio.h>

/*! \file board_drawer.c
    \brief 
*/

void clearScreenHideCursor(){

	//! clear screen
	printf("\033[2J");
	//! hide cursor
	printf("\033[?25l");
}




void draw(cellTable ct){

	//! go to 0,0
	printf("\033[0;0H");

	int nb_rows=ct.arena.nb_rows;
	int nb_cols=ct.arena.nb_cols;

	for (int i = 0; i < nb_rows; ++i)
	{
		for (int j = 0; j < nb_cols; ++j)
		{
			cell c=ct.table[i][j];

			int colorInt=c.isAlive? 40 : 101; 
			printf("\033[%dm  ",colorInt);
			
		}
		printf("\n");
	}
}