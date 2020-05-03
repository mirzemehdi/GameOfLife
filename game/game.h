#ifndef __GAME__
#define __GAME__
#include "cellTable.h"
#include "arena.h"

/* The game structure has the time value and the table structure.
The time is the vslue given by the user. The game will be updated
every time after this certain time */

struct game{

	cellTable table;
	int option;

};
typedef struct game game;

game G_create(cellTable ct,int option);
void G_updateTable(game g);
int getAliveStatus(cell c,cellTable table,int option);

#endif