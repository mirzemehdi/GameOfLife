#ifndef __ARENA__
#define __ARENA__
#include "cell.h"

struct arena {
	int nb_rows;
	int nb_cols;
};

typedef struct arena arena;

arena A_new(int nb_rows,int nb_cols);
int A_isInside(cell c,arena ar);


#endif