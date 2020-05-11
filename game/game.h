#ifndef __GAME__
#define __GAME__
#include "cellTable.h"
#include "arena.h"

/**
 *@file Doxygen
 *@author Nigar Yusifzada & Mirzamendi Karimov
 *@date 3 may 2020
 *The Life Game consists of a universe which contains live cells.
 *Тhey appear and dissapear according to some rules which will be
 *explained later in the Codes. Let's start with the game
*/

/**
 *The game structure has the time value and the table structure.
 *The time is the vslue given by the user. The game will be updated
 *every time after this certain time.
*/

//!Creating the structure of the game
struct game{

	cellTable table; //**< Table of the cells */
	int option; //**< Option to choose if the game to be continious or not */

};
typedef struct game game;

//!Creating the new game
//@param ct This is a cellTable
//@param option This is a option (2 for circular)
game G_create(cellTable ct,int option);
//!Creates a new view every time the time given by the user passes
//@param g This passes the game structure
void G_updateTable(game g);
//!function to see if cell is Alive or not
//@param c This passes the cell which will be got
//@param table This is the table in which we have the cell
//@param option for choosing the option of processing
int getAliveStatus(cell c,cellTable table,int option);

#endif
