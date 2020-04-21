#ifndef __GAME__
#define __GAME__
#include "cellTable.h"
#include "arena.h"


struct game{

	int timeMilliSec;
	cellTable table;

};
typedef struct game game;

game G_create(int timeMilliSec,cellTable ct);
void G_start(game g);
int getAliveStatus(cell c,cellTable table);

#endif