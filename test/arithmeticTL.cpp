#include "../test/UtilsTest.h"
#include "../src/Add16.h"
#include "../src/Sub16.h"
#include "../src/Eq.h"
#include "../src/Leu.h"
#include "../src/Ltu.h"

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
  Z16			Z(0);
  Eq			EQ(0xF,0xF);
  Leu			LEU(0xD,0xD);
  Ltu			LTU(0xB,0xB);

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

  printf("\n********************\n");
  printf("Bloc Z Test\n"); 
  printf("Remember: If any bit set returns 0, else (all zero) returns 1\n"); 
  printf("TestCase 0\n");
  evaluate(1,Z.get_z());

  printf("\nTestCase 1\n");
  Z.set_W(0x1);
  evaluate(0,Z.get_z());

  printf("\nTestCase 2\n");
  Z.set_W(0x5);
  evaluate(0,Z.get_z());

  printf("\nTestCase 3\n");
  Z.set_W(0xA);
  evaluate(0,Z.get_z());

  printf("\n********************\n");
  printf("Bloc EQ Test\n"); 
  printf("Remember: If equal returns 1, else returns 0\n"); 
  printf("TestCase 0\n");
  evaluate(1,EQ.get_w());

  printf("\nTestCase 1\n");
  EQ.set_X(0x2);
  EQ.set_Y(0xA);
  evaluate(0,EQ.get_w());

  printf("\nTestCase 2\n");
  EQ.set_X(0xE);
  EQ.set_Y(0xD);
  evaluate(0,EQ.get_w());

  printf("\nTestCase 3\n");
  EQ.set_X(0x2);
  EQ.set_Y(0x2);
  evaluate(1,EQ.get_w());

  printf("\n********************\n");
  printf("Bloc LTU Test\n"); 
  printf("Remember: If less 1, else returns 0\n"); 
  printf("out = 1 = borrow = X-Y < 0 = X < Y\n"); 
  printf("TestCase 0\n");
  evaluate(0,LTU.get_w());

  printf("\nTestCase 1\n");
  LTU.set_X(0x2);
  LTU.set_Y(0xA);
  evaluate(1,LTU.get_w());

  printf("\nTestCase 2\n");
  LTU.set_X(0x4);
  LTU.set_Y(0x9);
  evaluate(1,LTU.get_w());

  printf("\nTestCase 3\n");
  LTU.set_X(0xA);
  LTU.set_Y(0x2);
  evaluate(0,LTU.get_w());

  printf("\n********************\n");
  printf("Bloc LEU Test\n"); 
  printf("Remember: If less or equal returns 1, else returns 0\n"); 
  printf("TestCase 0\n");
  evaluate(1,LEU.get_w());

  printf("\nTestCase 1\n");
  LEU.set_X(0x2);
  LEU.set_Y(0xA);
  evaluate(1,LEU.get_w());

  printf("\nTestCase 2\n");
  LEU.set_X(0x1);
  LEU.set_Y(0x1);
  evaluate(1,LEU.get_w());

  printf("\nTestCase 3\n");
  LEU.set_X(0x3);
  LEU.set_Y(0x2);
  evaluate(0,LEU.get_w());

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
