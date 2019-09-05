#include "../src/Add16.h"

#define TEST_CASES 5
//#define TEST_CASES 8

int main()
{

  printf("Arihmetic test:\n");

  srand (time(NULL));
  printf ("Random initialized!\n");

  int passed = 0;
  int failed = 0;

  FullAdder	FA(0,0,0);
  Add16		ADD(3,3);

  printf("FullAdder Test: %d cases\n",TEST_CASES);  
  if(FA.get_out() == 0 && FA.get_carry_out() == 0)
  {
    printf("Case 1 FullAdder Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 1 FullAdder Test Failed!\n");
    failed++;
  }
  FA.set_a(1);
  if(FA.get_out() == 1 && FA.get_carry_out() == 0)
  {
    printf("Case 2 FullAdder Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 2 FullAdder Test Failed!\n");
    failed++;
  }
  FA.set_b(1);
  if(FA.get_out() == 0 && FA.get_carry_out() == 1)
  {
    printf("Case 3 FullAdder Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 3 FullAdder Test Failed!\n");
    failed++;
  }
  FA.set_carry_in(1);
  if(FA.get_out() == 1 && FA.get_carry_out() == 1)
  {
    printf("Case 4 FullAdder Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 4 FullAdder Test Failed!\n");
    failed++;
  }
  FA.set_a(0);
  FA.set_b(1);
  FA.set_carry_in(1);
  if(FA.get_out() == 0 && FA.get_carry_out() == 1)
  {
    printf("Case 5 FullAdder Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 5 FullAdder Test Failed!\n");
    failed++;
  }

  printf("Add16 Test: 3 cases\n");
  WORD ww = ADD.get_W();
  WORD out = ADD.get_carry_out();
  printf("here W == %d, Carry Out = %d\n",ww,out);
  if(ADD.get_W() == 6 && ADD.get_carry_out() == 0)
  {
    printf("Case 1 Add16 Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 1 Add16 Test Failed!\n");
    failed++;
  }/*
  ADD.set_X(256);
  ADD.set_Y(256);
  if(ADD.get_W() == 512 && ADD.get_carry_out() == 0)
  {
    printf("Case 2 Add16 Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 2 Add16 Test Failed!\n");
    failed++;
  }
  ADD.set_X(65535);
  ADD.set_Y(1);
  if(ADD.get_W() == 0 && ADD.get_carry_out() == 1)
  {
    printf("Case 3 Add16 Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 3 Add16 Test Failed!\n");
    failed++;
  }
*/
  printf ("%d passed tests, %d failed tests.\n",passed, failed);

  if(failed == 0)
  {
    printf("PASSED SUCCESSFULL!\n");
    exit(0);
  } else {
    printf("There are some errors!\n");
    exit(-1);
  }

}
