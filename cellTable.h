#ifndef __CELLTABLE__
#define __CELLTABLE__
#include "arena.h"
#include "cellList.h"
#include "cell.h"

struct cellTable{
	cell** table;
	arena arena;

};

typedef struct cellTable cellTable;

cellTable CT_init(arena ar);
void CT_print(cellTable ct);
void CT_makeCellAliveDead(cellTable *ct,int row,int col,int isAlive);
cellList CT_neighbours(cellTable ct,cell c);
cellTable CT_copy(cellTable ct);

#endif