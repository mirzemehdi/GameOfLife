#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <CUnit/Basic.h>
#include <CUnit/Console.h>
#include <CUnit/CUnit.h>

#include "game.h"
#include "draw_sdl.h"


void test_cell_print(){
	C_print(C_new(3,4,1));
	CU_PASS("Passed cell print");
}


void test_cell_inside_arena(void){
	CU_ASSERT_TRUE(A_isInside(C_new(5,5,1),A_new(10,10)))
	CU_ASSERT_FALSE(A_isInside(C_new(5,5,1),A_new(5,5)))
	CU_ASSERT_TRUE(A_isInside(C_new(4,4,0),A_new(5,5)))
	CU_ASSERT_FALSE(A_isInside(C_new(3,5,1),A_new(5,5)))
	CU_ASSERT_FALSE(A_isInside(C_new(-1,5,1),A_new(10,10)))
	CU_ASSERT_TRUE(A_isInside(C_new(0,0,0),A_new(6,9)))
}

void test_cellList(void){
	cellList cl=CL_new();
	CU_ASSERT_EQUAL(0,cl.size);
}

void test_cellTable_initialize(void){
	arena ar=A_new(10,10);
	cellTable ct=CT_init(ar);
	CU_ASSERT_PTR_NOT_EQUAL(&ar,&(ct.arena));
	CU_ASSERT_PTR_NOT_NULL(&(ct.table));

}
void test_cellTable_makeCell_alive(void){
	arena ar=A_new(10,10);
	cellTable ct=CT_init(ar);
	CT_makeCellAliveDead(&ct,3,4,1);

	CU_ASSERT_TRUE(ct.table[3][4].isAlive);
	CU_ASSERT_FALSE(ct.table[5][4].isAlive);


}

void test_cellTable_print(void){
	arena ar=A_new(10,10);
	cellTable ct=CT_init(ar);
	CU_PASS("Passed CellTable print");
}

void test_cellTable_copy(void){
	arena ar=A_new(10,10);
	cellTable ct=CT_init(ar);
	cellTable copyCT=CT_copy(ct);
	CU_ASSERT_PTR_NOT_EQUAL(&ct,&(copyCT));

}

void test_cellList_print(void){

	cellList cl=CL_new();
	CL_add(&cl,C_new(3,4,1));
	CL_print(cl);
	CU_PASS("CellList print Passed");
}

void test_game_cell_alive_status(){
   	arena ar=A_new(10,10);
	cellTable ct=CT_init(ar);
	CT_makeCellAliveDead(&ct,0,0,1);
	CT_makeCellAliveDead(&ct,1,0,1);
	CT_makeCellAliveDead(&ct,2,0,1);
	CT_makeCellAliveDead(&ct,1,1,1);

	CU_ASSERT_TRUE(getAliveStatus(C_new(1,0,0),ct,1));
	CU_ASSERT_FALSE(getAliveStatus(C_new(0,0,0),ct,1));

	CT_makeCellAliveDead(&ct,4,5,0);
	CU_ASSERT_TRUE(getAliveStatus(C_new(1,0,0),ct,2));
	CU_ASSERT_FALSE(getAliveStatus(C_new(3,2,0),ct,2));

	CU_ASSERT_FALSE(getAliveStatus(C_new(9,9,0),ct,2));
	CU_ASSERT_FALSE(getAliveStatus(C_new(0,0,0),ct,2));


}


int main(int argc, char const *argv[])
{
	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	CU_pSuite pS0=CU_add_suite("Testing cell",NULL,NULL);
	CU_ADD_TEST(pS0,test_cell_print);

	CU_pSuite pS1=CU_add_suite("Testing arena",NULL,NULL);
	CU_ADD_TEST(pS1,test_cell_inside_arena);


	CU_pSuite pS2=CU_add_suite("Testing cellList",NULL,NULL);
	CU_ADD_TEST(pS2,test_cellList);
	CU_ADD_TEST(pS2,test_cellList_print);


	CU_pSuite pS3=CU_add_suite("Testing cellTable",NULL,NULL);
	CU_ADD_TEST(pS3,test_cellTable_initialize);
	CU_ADD_TEST(pS3,test_cellTable_copy);
	CU_ADD_TEST(pS3,test_cellTable_makeCell_alive);
	CU_ADD_TEST(pS3,test_cellTable_print);



	CU_pSuite pS4=CU_add_suite("Testing game",NULL,NULL);
	CU_ADD_TEST(pS4,test_game_cell_alive_status);

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();

	return CU_get_number_of_failures();
}