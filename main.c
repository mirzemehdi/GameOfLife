#include "game.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{

	int option;
	printf("Please, give the option value you wanna run\n");
	printf("(1) Clipped\n");
	printf("(2) Circular\n");
	printf("Option: ");
	scanf("%d",&option);


	//Option 1 for clipped version , option 2 for circular
	if (option!=1 && option!=2)
		printf("Wrong option\n");

	arena ar=A_new(30,30); //boundaries of table
	cellTable ct=CT_init(ar); //2D cell Table within arena
	
	//Initialize alive cells for starting
	CT_makeCellAliveDead(&ct,4,23,1);
	CT_makeCellAliveDead(&ct,5,23,1);
	CT_makeCellAliveDead(&ct,6,23,1);
	CT_makeCellAliveDead(&ct,6,24,1);
	CT_makeCellAliveDead(&ct,5,25,1);
	// CT_makeCellAliveDead(&ct,4,1,1);



	//Creating game with given time and table
	game g=G_create(100,ct,option);
	//Starts the game .Repeats an algoritm in table each timeUnit(given by the user)
	G_start(g); 

	return 0;
}