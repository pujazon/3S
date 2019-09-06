#include "../src/UtilsTest.h"
#include "../src/Add16.h"
#include "../src/Sub16.h"

//TODO: Coherence between failed and passed with TEST_CASES
//#define TEST_CASES 8

int passed = 0;
int failed = 0;

int main()
{

  printf("Arihmetic test:\n");

  srand (time(NULL));
  printf ("Random initialized!\n");

  FullAdder		FA(0,0,0);
  FullSubstractor	FS(0,0,0);
  Add16			ADD(3,3);
  Sub16			SUB(200,7);

  printf("\n********************\n");
  printf("FullAdder Test\n"); 
  printf("TestCase 0\n");
  evaluate(0,FA.get_out());
  evaluate(0,FA.get_carry_out()); 

  printf("\nTestCase 1\n");
  FA.set_a(1);
  evaluate(1,FA.get_out());
  evaluate(0,FA.get_carry_out()); 

  printf("\nTestCase 2\n");
  FA.set_b(1);
  evaluate(0,FA.get_out());
  evaluate(1,FA.get_carry_out()); 

  printf("\nTestCase 3\n");
  FA.set_carry_in(1);
  evaluate(1,FA.get_out());
  evaluate(1,FA.get_carry_out()); 


  printf("\n********************\n");
  printf("FullSubstractor Test\n"); 
  printf("TestCase 0\n");
  evaluate(0,FS.get_out());
  evaluate(0,FS.get_borrow()); 

  printf("\nTestCase 1\n");
  FS.set_a(1);
  evaluate(1,FS.get_out());
  evaluate(0,FS.get_borrow()); 

  printf("\nTestCase 2\n");
  FS.set_b(1);
  evaluate(0,FS.get_out());
  evaluate(0,FS.get_borrow()); 

  printf("\nTestCase 3\n");
  FS.set_carry_in(1);
  evaluate(1,FS.get_out());
  evaluate(1,FS.get_borrow()); 

  printf("\nTestCase 4\n");
  FS.set_a(0);
  FS.set_b(1);
  FS.set_carry_in(1);
  evaluate(0,FS.get_out());
  evaluate(1,FS.get_borrow()); 

  printf("\n********************\n");
  printf("Add16 Test\n"); 
  printf("TestCase 0\n");
  evaluate(6,ADD.get_W());
  evaluate(0,ADD.get_carry_out()); 

  printf("\nTestCase 1\n");
  ADD.set_X(256);
  ADD.set_Y(256);
  evaluate(512,ADD.get_W());
  evaluate(0,ADD.get_carry_out());  

  printf("\nTestCase 2\n");
  ADD.set_X(65535); //(2^32)-1. Overflow case
  ADD.set_Y(1);
  evaluate(0,ADD.get_W());
  evaluate(1,ADD.get_carry_out());  

  printf("\n********************\n");
  printf("Sub16 Test\n"); 
  printf("TestCase 0\n");
  evaluate(193,SUB.get_W());
  evaluate(0,SUB.get_borrow()); 

  printf("\nTestCase 1\n");	//Bad Case
  SUB.set_X(1);
  SUB.set_Y(2);
  evaluate(65535,SUB.get_W()); 	//1-1 = 0, 1-2 = all bits set ((2^16)-1)
  evaluate(1,SUB.get_borrow());	//And it's not representable with that SUB

  printf("\nTestCase 2\n");
  SUB.set_X(23454); //(2^32)-1. Overflow case
  SUB.set_Y(23454);
  evaluate(0,SUB.get_W());
  evaluate(0,SUB.get_borrow());  

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
