#ifndef __CELLLIST__
#define __CELLLIST__

#define CELL_MAX 8
#include "cell.h"

/*! \file cellList.h
    \brief Creating the list of cells, with its size
*/

/*! \struct CellList
    \brief  The CellList structure is written to keep the cells in the array,
	because later on we will need to keep neighbours of the cells
*/

/**
 * @param size This parameter is to set the size of cellList
 * @param arr This parameter keeps the array of cells
 */

struct cellList{

	int size;
	cell arr[CELL_MAX];
};

typedef struct cellList cellList;

cellList CL_new();
void CL_add(cellList *cl,cell c);
void CL_print(cellList cl);




#endif