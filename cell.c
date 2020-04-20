#include "cell.h"
#include <stdio.h>

cell C_new(int row,int col){
	cell c={row,col};
	return c;
}

void C_print(cell c){
	printf("Cell info: {row:%d,column:%d}\n",c.row,c.col );
}

