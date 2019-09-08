#include "../test/UtilsTest.h"
#include "../src/And2.h"
#include "../src/Not.h"
#include "../src/Or2.h"
#include "../src/Mux2_1.h"

//TODO: Coherence between failed and passed with TEST_CASES
//#define TEST_CASES 5

int passed = 0;
int failed = 0;

int main()
{
  printf("Logic Gates test:\n");

  srand (time(NULL));
  printf ("Random initialized!\n");

  And2 		and1(1,1);
  Or2 		or1(0,0);
  Not 		n(1);
  MUX2_1	mux21(0,1,1);

  printf("\n********************\n");
  printf("And2 Test:\n");
  evaluate(1,and1.get_out());


  printf("\n********************\n");
  printf("Or2 Test:\n");
  evaluate(0,or1.get_out());

  printf("\n********************\n");
  printf("Not Test:\n");
  evaluate(0,n.get_out());

  printf("\n********************\n");
  printf("MUX2_1 Test\n"); 
  printf("TestCase 0\n");
  evaluate(1,mux21.get_out()); 

  printf("\nTestCase 1\n");
  mux21.set_s(0);
  evaluate(0,mux21.get_out()); 


  printf("\n********************\n");
  //printf ("%d passed tests, %d failed tests.\n",passed, failed);

  if(failed == 0)
  {
    printf("PASSED SUCCESSFULL!\n");
    exit(0);
  } else {
    printf("There are some errors!\n");
    exit(-1);
  }

}
