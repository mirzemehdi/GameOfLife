#ifndef __CELLTABLE__
#define __CELLTABLE__
#include "arena.h"
#include "cellList.h"
#include "cell.h"

/* cellTable structure is the table of cells, it has a bounders
(arena) and table itself */

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
void CT_draw(cellTable ct, char *ppm_name,int imgIndex);

#endif