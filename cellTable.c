#include "cellTable.h"
#include "cell.h"
#include "arena.h"
#include <stdlib.h>

cellTable CT_init(arena ar){

	cell** cellArr=(cell**)malloc(ar.nb_rows * sizeof(cell *));
	for (int i = 0; i < ar.nb_rows; ++i)
	{
		cellArr[i]=(cell*)malloc(ar.nb_cols * sizeof(cell));
	}
	cellTable ct={cellArr,ar};

	return ct;
}

void CT_print(cellTable ct){
	int nb_rows=ct.arena.nb_rows;
	int nb_cols=ct.arena.nb_cols;

	for (int i = 0; i < nb_rows; ++i)
	{
		for (int j = 0; j < nb_cols; ++j)
		{
			cell c=ct.table[i][j];
			C_print(c);
		}
	}
}

int main(int argc, char const *argv[])
{
	arena ar=A_new(5,8);

	cellTable ct=CT_init(ar);
	CT_print(ct);

	return 0;
}