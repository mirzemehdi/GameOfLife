#include "cellTable.h"
#include <stdlib.h>
#include <stdio.h>

cellTable CT_init(arena ar){

	cell** cellArr=(cell**)malloc(ar.nb_rows * sizeof(cell *));

	for (int i = 0; i < ar.nb_rows; ++i)
	{
		cellArr[i]=(cell*)malloc(ar.nb_cols * sizeof(cell));
		for (int j = 0; j < ar.nb_cols; j++)
		{
			
			cellArr[i][j]=C_new(i,j,0);
			
		}
	}
	cellTable ct={cellArr,ar};

	return ct;
}

cellList CT_neighbours(cellTable ct,cell c){

	arena ar=ct.arena;
	cell tempCell=c;
	cellList neighbourList=CL_new();
	//Upper
	tempCell.row=c.row-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);

	//Lower
	tempCell.row=c.row+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);

	//Left 
	tempCell.row=c.row;
	tempCell.col=c.col-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);

	//Right
	tempCell.col=c.col+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);


	//Upper Right
	tempCell.col=c.col+1;
	tempCell.row=c.row-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);


	//Upper Left
	tempCell.col=c.col-1;
	tempCell.row=c.row-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);


//Lower Left
	tempCell.col=c.col-1;
	tempCell.row=c.row+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);



//Lower Right
	tempCell.col=c.col+1;
	tempCell.row=c.row+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	                                                                                                                   

	return neighbourList;

} 

void CT_print(cellTable ct){
	int nb_rows=ct.arena.nb_rows;
	int nb_cols=ct.arena.nb_cols;

	for (int i = 0; i < nb_rows; ++i)
	{
		for (int j = 0; j < nb_cols; ++j)
		{
			cell c=ct.table[i][j];
			printf("%d ",c.isAlive );
			
		}
		printf("\n");
	}
}

void CT_makeCellAliveDead(cellTable *ct,int row,int col,int isAlive){
	cell *c=&(ct->table[row][col]);
	c->isAlive=isAlive;
}

cellTable CT_copy(cellTable ct){

	arena ar=ct.arena;
	cellTable copyCT=CT_init(ar);
	cell** cellArr=copyCT.table;

	for (int i = 0; i < ar.nb_rows; ++i)
	{
		for (int j = 0; j < ar.nb_cols; j++)
			cellArr[i][j]=ct.table[i][j];
			
	}
	copyCT.table=cellArr;

	return copyCT;

}






