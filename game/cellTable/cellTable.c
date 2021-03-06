#include "cellTable.h"
#include <stdlib.h>
#include <stdio.h>

/*! \file cellTable.c
    \brief 
*/

/**
 * The CT_init() function creates a new table. First of all it should have the
 * size of the boundaries which we gain from arena. For each row and column
 * we assign the values of 2D array of cells to 0 and return the table
 */

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

/**
 * The CT_neighbours function is written in order to return the list of
 * existence neigbours. Giving the table of cells and the concrete cell, we check
 * if the neighbour from any side exists (by using the A_isInside function written before),
 * and if exists we  add it in an array of neighbours
 */

cellList CT_neighbours(cellTable ct,cell c,int option){
	//option = 2 means it is circular

	arena ar=ct.arena;
	cell tempCell=c;
	cellList neighbourList=CL_new();
	//Upper
	tempCell.row=c.row-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.row=ar.nb_rows-1;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	}

	//Lower
	tempCell.row=c.row+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.row=0;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	}

	//Left 
	tempCell.row=c.row;
	tempCell.col=c.col-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.col=ar.nb_cols-1;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	}

	//Right
	tempCell.col=c.col+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.col=0;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	}


	//Upper Right
	tempCell.col=c.col+1;
	tempCell.row=c.row-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.row=(ar.nb_rows+tempCell.row)%ar.nb_rows;
			tempCell.col=(ar.nb_cols+tempCell.col)%ar.nb_cols;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	}


	//Upper Left
	tempCell.col=c.col-1;
	tempCell.row=c.row-1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.row=(ar.nb_rows+tempCell.row)%ar.nb_rows;
			tempCell.col=(ar.nb_cols+tempCell.col)%ar.nb_cols;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	}

//Lower Left
	tempCell.col=c.col-1;
	tempCell.row=c.row+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.row=(ar.nb_rows+tempCell.row)%ar.nb_rows;
			tempCell.col=(ar.nb_cols+tempCell.col)%ar.nb_cols;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	}


//Lower Right
	tempCell.col=c.col+1;
	tempCell.row=c.row+1;
	if(A_isInside(tempCell,ar))
		CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
	else{
		if (option==2)
		{
			tempCell.row=(ar.nb_rows+tempCell.row)%ar.nb_rows;
			tempCell.col=(ar.nb_cols+tempCell.col)%ar.nb_cols;
			CL_add(&neighbourList,ct.table[tempCell.row][tempCell.col]);
		}
	} 


	return neighbourList;

} 
/**
 * The function prints the table. For each row and column
 * it prints the status of cell in that location
 */

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

/** The CT_makeCellAliveDead() function is written in order to 
 * change the status(Alive or Dead) of the cell to given isAlive one. 
 * It will help us alot in further problems
 */

void CT_makeCellAliveDead(cellTable *ct,int row,int col,int isAlive){
	cell *c=&(ct->table[row][col]);
	c->isAlive=isAlive;
}

/** 
 * This function creates a copy of the table, it will
 * help us in further problems of saving data 
 */

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









