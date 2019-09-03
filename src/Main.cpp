#include "Utils.h"
#include "And2.h"
#include "Not.h"
#include "Or2.h"

#define TEST_CASES 3

int main()
{
  srand (time(NULL));
  printf ("Random initialized!\n");

  int passed = 0;
  int failed = 0;

  AND2 and1(1,1);
  OR2 or1(0,0);
  NOT n(1);

  printf("AND2 Test:\n");
  if(and1.get_out() == 1)
  {
    printf("AND2 Test Pass successfull!\n");
    passed++;
  } else {
    printf("AND2 Test Failed!\n");
    failed++;
  }

  printf("OR2 Test:\n");
  if(or1.get_out() == 0)
  {
    printf("OR2 Test Pass successfull!\n");
    passed++;
  } else {
    printf("OR2 Test Failed!\n");
    failed++;
  }


  printf("NOT Test:\n");
  if(n.get_out() == 0)
  {
    printf("NOT Test Pass successfull!\n");
    passed++;
  } else {
    printf("NOT Test Failed!\n");
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
