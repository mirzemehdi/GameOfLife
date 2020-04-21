#include "cell.h"
#include <stdio.h>

cell C_new(int row,int col,int isAlive){
	cell c={row,col,isAlive};
	return c;
}

void C_print(cell c){
	printf("Cell info: {row:%d,column:%d,isDead:%d}\n",c.row,c.col ,c.isAlive);
}

