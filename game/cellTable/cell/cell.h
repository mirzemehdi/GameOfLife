#ifndef __CELL__
#define __CELL__

/*! \file cell.h
    \brief  The Life Game consists of a universe which contains live cells. 
	Тhey appear and dissapear according to some rules which will be
	explained later in the Codes. Let's start with the game 
*/

/*! \struct cell
    \brief  First of all the cell which is the root of the Game . The roots will be
	placed in some area with size given by the user. The cell has the row number,
	column number (in order to see the location in the area) and the
	argument isAlive in order to see the Status of the cell
	(if the cell is dead or alive).
*/

/**
 * @param row This is the number of row where cell is located
 * @param col This is the number of column where cell is located
 * @param isAlive This is the parameter showing if the cell is alive or not
 */

struct cell{
	int row;
	int col;
	int isAlive;
};

typedef struct cell cell;

cell C_new(int row,int col,int isAlive);
void C_print(cell c);

#endif
