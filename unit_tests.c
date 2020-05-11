#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <CUnit/Basic.h>
#include <CUnit/Console.h>
#include <CUnit/CUnit.h>

#include "game.h"
#include "draw_sdl.h"


void test_cell_inside_arena(void){
	CU_ASSERT_TRUE(A_isInside(C_new(5,5,1),A_new(10,10)))
	CU_ASSERT_FALSE(A_isInside(C_new(5,5,1),A_new(5,5)))
	CU_ASSERT_TRUE(A_isInside(C_new(4,4,0),A_new(5,5)))
	CU_ASSERT_FALSE(A_isInside(C_new(3,5,1),A_new(5,5)))
	CU_ASSERT_FALSE(A_isInside(C_new(-1,5,1),A_new(10,10)))
	CU_ASSERT_TRUE(A_isInside(C_new(0,0,0),A_new(6,9)))
}


int main(int argc, char const *argv[])
{
	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	CU_pSuite pS1=CU_add_suite("Testing arena",NULL,NULL);

	CU_ADD_TEST(pS1,test_cell_inside_arena);


	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();

	return CU_get_number_of_failures();
}