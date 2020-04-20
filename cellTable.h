#ifndef __CELLTABLE__
#define __CELLTABLE__
#include "arena.h"

struct cellTable{
	cell** table;
	arena arena;

};

typedef struct cellTable cellTable;

cellTable CT_init(arena ar);

#endif