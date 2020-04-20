#ifndef __CELL__
#define __CELL__

struct cell{
	int row;
	int col;
	int isDead;
};

typedef struct cell cell;

cell C_new(int row,int col);
void C_print(cell c);

#endif