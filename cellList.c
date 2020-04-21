#include "cellList.h"

cellList CL_new(){
	cellList cl;
	cl.size=0;
	return cl;
}
void CL_add(cellList *cl,cell c){

	if (cl->size<CELL_MAX)
		cl->arr[cl->size++]=c;
}



void CL_print(cellList cl){

	for (int i = 0; i < cl.size; ++i)
	{
		cell c=cl.arr[i];
		C_print(c);
	}
}



