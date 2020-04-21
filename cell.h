#ifndef __CELL__
#define __CELL__

struct cell{
	int row;
	int col;
	int isAlive;
};

typedef struct cell cell;

cell C_new(int row,int col,int isAlive);
void C_print(cell c);

#endif