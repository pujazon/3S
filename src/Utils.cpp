#include "Utils.h"

void GetBitArray(int Bus, int bitlength, Bit *BitArray)
{ 
  for(int i=0;i<bitlength;i++) 
  {   
    //Mask on i-th bit of W and set it to lsb	
    BitArray[i] = (Bus&(1<<(i)))>>(i);
  }
}

void printBitArray(Bit *BitArray, int bitlength)
{
  printf("BitArray: ");
  for(int i=bitlength-1;i>=0;i--)
  {   
    printf("%d",BitArray[i]);
    if(i%4 == 0 && i != 0) printf(" ");
  }


  printf(" ;\n");
}
