#include "game.h"
#include <stdio.h>
#include <unistd.h>

/*! \file game.c
    \brief 
*/

/**
 * This function creates a new Game!
 */

game G_create(cellTable ct,int option){
	game g={ct,option};
	return g;
}

/**
 * The function G_start() creates a new view every time the
 * time given by the user passes.
 */

void G_updateTable(game g){
	cellTable* ct=&(g.table);
	arena ar=ct->arena;

	int nb_rows=ar.nb_rows;
	int nb_cols=ar.nb_cols;
		
	cellTable copyTable=CT_copy(*ct);

	for (int i = 0; i < nb_rows; ++i){
		for (int j = 0; j < nb_cols; ++j){
			cell c=copyTable.table[i][j];
			int isAlive=getAliveStatus(c,copyTable,g.option);
			CT_makeCellAliveDead(ct,c.row,c.col,isAlive);
		}
	}

	
}




/**
 *  The function getAliveStatus() is the main function of the game. That is how
 * game works with its rules. If an alive cell has a 0 or 1 alive neighbours, it will turn
 * to be dead beacuse of under-population. If an alive cell has 4 or more alive neighbours, it will also turn
 * to be dead because of overcrowding. If an alive cell has 2 or 3 alive neighbours it lives on to 
 * the next generation. Any dead cell with exactly three live neighbours becomes alive.
 */

int getAliveStatus(cell c,cellTable table,int option){
	//Previous status
	int currentStatus=c.isAlive;
	// 0 or 1 --> dead
	// 4 or more --> dead
	// 2 or 3 --> alive
	// exact 3 --> alive 
	cellList neighbours=CT_neighbours(table,c,option);

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

