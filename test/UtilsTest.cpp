#include "UtilsTest.h"

void evaluate(int expected, int calculated)
{
  printf("Computed:	%d\nExpected:	%d\n",calculated,expected);
  if(calculated == expected)
  {
    printf("Correct!\n");
    passed++;
  } else {
    printf("Failed!\n");
    failed++;
  }
}
