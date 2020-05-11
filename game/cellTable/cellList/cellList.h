#ifndef __CELLLIST__
#define __CELLLIST__

#define CELL_MAX 8
#include "cell.h"

/**
 *  The CellList structure is written to keep the cells in the array,
 * because later on we will need to keep neighbours of the cells
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