#ifndef __GAME__
#define __GAME__
#include "cellTable.h"
#include "arena.h"


/*! \file game.h
    \brief  The game logic is in there
*/

/*! \struct game
    \brief  For creating a new game has following parameters
*/

/**
 * @param table Table of the cells
 * @param option Option to choose if the game to be continious or not
 */

struct game
{

	cellTable table; //**< Table of the cells */
	int option;		 //**< Option to choose if the game to be continious or not */
};
typedef struct game game;

/**
 * Creating the new game
 * @param ct This is a cellTable
 * @param option This is a option (2 for circular)
 */

game G_create(cellTable ct, int option);
/**
 * Creates a new view every time the time given by the user passes
 * @param g This passes the game structure
 */
void G_updateTable(game g);

/**
 * Function to see if cell is Alive or not
 * @param c This passes the cell which will be got
 * @param table This is the table in which we have the cell
 * @param option for choosing the option of processing
 */
int getAliveStatus(cell c, cellTable table, int option);

#endif
