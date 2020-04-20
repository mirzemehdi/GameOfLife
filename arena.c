#include "arena.h"
#include <stdio.h>


arena A_new(int nb_rows,int nb_cols){
	arena a={nb_rows,nb_cols};
	return a;
}

int A_isInside(cell c,arena ar){
	if (c.row>=0 && c.row<ar.nb_rows &&
		c.col>=0 && c.col<ar.nb_cols)
		return 1;
	else 
		return 0;
	
}

