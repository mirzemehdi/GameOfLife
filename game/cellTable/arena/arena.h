#ifndef __ARENA__
#define __ARENA__
#include "cell.h"

/*! \struct arena
    \brief  The arena structure has rows and columns which will be 
	given by the user as the size(boudaries) of the game
*/

/**
 * @param nb_rows This is the number or rows
 * @param nb_cols This is the number or columns
 */

struct arena {
	int nb_rows;
	int nb_cols;
};

typedef struct arena arena;

arena A_new(int nb_rows,int nb_cols);
int A_isInside(cell c,arena ar);


#endif