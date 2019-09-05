#include "../src/Add16.h"

#define TEST_CASES 6

int main()
{

  printf("Arihmetic test:\n");

  srand (time(NULL));
  printf ("Random initialized!\n");

  int passed = 0;
  int failed = 0;

  FullAdder	FA(0,0,0);
  Add16		ADD(0,0);

  printf("FullAdder Test: 4 cases\n");  
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
    printf("Case 4 MUX2_1 Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 4 MUX2_1 Test Failed!\n");
    failed++;
  }

  printf("Add16 Test: 2 cases\n");
  ADD.set_X(256);
  ADD.set_Y(256);
  if(ADD.get_W() == 512 && ADD.get_carry_out() == 0)
  {
    printf("Case 1 Add16 Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 1 Add16 Test Failed!\n");
    failed++;
  }
  ADD.set_X(65535);
  ADD.set_Y(1);
  if(ADD.get_W() == 0 && ADD.get_carry_out() == 1)
  {
    printf("Case 2 Add16 Test Pass successfull!\n");
    passed++;
  } else {
    printf("Case 2 Add16 Test Failed!\n");
    failed++;
  }

  printf ("%d passed tests, %d failed tests.\n",passed, failed);

  if(passed == TEST_CASES)
  {
    printf("PASSED SUCCESSFULL!\n");
    exit(0);
  } else {
    printf("There are some errors!\n");
    exit(-1);
  }

}
