#include "cellList.h"

/* This is the function of creating new cellList with size 0  */

cellList CL_new(){
	cellList cl;
	cl.size=0;
	return cl;
}

/* In this function we add the cell in the array by reference , in order to not lose
the data out of the function  */

void CL_add(cellList *cl,cell c){

	if (cl->size<CELL_MAX)
		cl->arr[cl->size++]=c;
}


/* This function is for printing the array of the cell  */
void CL_print(cellList cl){

	for (int i = 0; i < cl.size; ++i)
	{
		cell c=cl.arr[i];
		C_print(c);
	}
}



