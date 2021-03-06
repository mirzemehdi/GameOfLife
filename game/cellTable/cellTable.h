#ifndef __CELLTABLE__
#define __CELLTABLE__
#include "arena.h"
#include "cellList.h"
#include "cell.h"


/*! \file cellTable.h
    \brief  We create a table of 2D array in here, where we will put the cells
*/

/*! \struct cellTable
    \brief  Is the table of cells, it has a bounders (arena) and table itself
*/

/**
 * @param table Passing the table
 * @param arena Passing the arena
 */

struct cellTable{
	cell** table;
	arena arena;
};

typedef struct cellTable cellTable;

cellTable CT_init(arena ar);
void CT_print(cellTable ct);
void CT_makeCellAliveDead(cellTable *ct,int row,int col,int isAlive);
cellList CT_neighbours(cellTable ct,cell c,int option);
cellTable CT_copy(cellTable ct);

#endif
