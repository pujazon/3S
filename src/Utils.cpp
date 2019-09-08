#include "Utils.h"

void GetBitArray(int Bus, int size, Bit *BitArray)
{ 
  for(int i=0;i<size;i++) 
  {   
    //Mask on i-th bit of W and set it to lsb	
    BitArray[i] = (Bus&(1<<(i)))>>(i);
  }
}

void printBitArray(Bit *BitArray, int size)
{
  printf("BitArray: ");
  for(int i=size-1;i>=0;i--)
  {   
    printf("%d",BitArray[i]);
    if(i%4 == 0 && i != 0) printf(" ");
  }


  printf(" ;\n");
}
