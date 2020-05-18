#include "cell.h"
#include <stdio.h>

/*! \file cell.c
    \brief 
*/

/**
 *  This funtion is to create a new cell giving it the row,
 * column number and status
 */

cell C_new(int row,int col,int isAlive){
	cell c={row,col,isAlive};
	return c;
}

/**
 *  This funtion was used to print the cells
 */
void C_print(cell c){
	printf("Cell info: {row:%d,column:%d,isAlive:%d}\n",c.row,c.col ,c.isAlive);
}

