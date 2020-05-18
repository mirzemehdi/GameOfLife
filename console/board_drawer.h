#ifndef __BOARD_DRAWER__
#define __BOARD_DRAWER__

#include "cellTable.h"

/*! \file board_drawer.h
    \brief Clearing screen, hiding the curson and drawing the table
*/

/**
 * Clears screen and hides cursor
 * */
void clearScreenHideCursor();
/**
 * Draws the table
 */
void draw(cellTable ct);


#endif