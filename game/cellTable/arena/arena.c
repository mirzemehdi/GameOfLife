#include "arena.h"
#include <stdio.h>

/**
 * Arena is used to check if the concrete cell is in the area
 * given by the user or not. It has the values of sizes given by the user
 */

/**
 * Here the new arena is created by giving the sizes of rows and columns
 */

arena A_new(int nb_rows,int nb_cols){
	arena a={nb_rows,nb_cols};
	return a;
}

/**
 * This function checks if the cell's row and column is in the arena's
 * row and column in order to check the existence of the cell in this arena
 */

int A_isInside(cell c,arena ar){
	if (c.row>=0 && c.row<ar.nb_rows &&
		c.col>=0 && c.col<ar.nb_cols)
		return 1;
	else 
		return 0;
}

