#include "game.h"
#include <stdio.h>
#include <unistd.h>

/* This function creates a new Game! */

game G_create(int timeMilliSec,cellTable ct){
	game g={timeMilliSec,ct};
	return g;
}

/* The function G_start() creates a new view every time the
time given by the user passes. */

void G_start(game g){
	cellTable* ct=&(g.table);
	arena ar=ct->arena;

	int nb_rows=ar.nb_rows;
	int nb_cols=ar.nb_cols;

	//Clear Screen
	printf("\033[2J");

	//Hide Screen
	printf("\033[?25l");

	for(int i=0;;i++){

		CT_print(g.table);
		//CT_draw(*ct,"life",0);
		cellTable copyTable=CT_copy(*ct);
		for (int i = 0; i < nb_rows; ++i)
		{
			for (int j = 0; j < nb_cols; ++j)
			{
				cell c=copyTable.table[i][j];
				int isAlive=getAliveStatus(c,copyTable);
				CT_makeCellAliveDead(ct,c.row,c.col,isAlive);
			}
		}

		usleep(1000*g.timeMilliSec);
		printf("\n");

	}

}

/* The function getAliveStatus() is the main function of the game. That is how
game works with its rules. If an alive cell has a 0 or 1 alive neighbours, it will turn
to be dead beacuse of under-population. If an alive cell has 4 or more alive neighbours, it will also turn
to be dead because of overcrowding. If an alive cell has 2 or 3 alive neighbours it lives on to 
the next generation. Any dead cell with exactly three live neighbours becomes alive.  */

int getAliveStatus(cell c,cellTable table){
	//Previous status
	int currentStatus=c.isAlive;
	// 0 or 1 -> dead
	// 4 or more ->> dead
	// 2 or 3 -->alive
	// exact 3 alive -> 
	cellList neighbours=CT_neighbours(table,c);

	int nb_alive_neighbours=0;
	for (int i = 0; i < neighbours.size; ++i)
	{
		cell temp=neighbours.arr[i];
		if (temp.isAlive) nb_alive_neighbours++;

	}
	int newStatus=currentStatus;

	if (nb_alive_neighbours<=1 || nb_alive_neighbours>=4)
		newStatus=0;
	if (nb_alive_neighbours==3)
		newStatus=1;

	return newStatus;

}

int main(int argc, char const *argv[])
{
	arena ar=A_new(30,30);

	cellTable ct=CT_init(ar);
	// CT_makeCellAliveDead(&ct,0,0,1);
	// CT_makeCellAliveDead(&ct,1,2,1);
	// CT_makeCellAliveDead(&ct,2,2,1);
	// CT_makeCellAliveDead(&ct,2,3,1);
	// CT_makeCellAliveDead(&ct,3,1,1);
	// CT_makeCellAliveDead(&ct,3,2,1);
	// CT_makeCellAliveDead(&ct,4,1,1);

	CT_makeCellAliveDead(&ct,4,23,1);
	CT_makeCellAliveDead(&ct,5,23,1);
	CT_makeCellAliveDead(&ct,6,23,1);
	CT_makeCellAliveDead(&ct,6,24,1);
	CT_makeCellAliveDead(&ct,5,25,1);
	// CT_makeCellAliveDead(&ct,4,1,1);




	game g=G_create(100,ct);
	G_start(g);

	return 0;
}