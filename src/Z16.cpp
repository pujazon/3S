#include "Utils.h"
#include "Z16.h"

Z16::Z16()
{
  W = rand();
}

Z16::Z16 (WORD W_in)
{
  W = W_in;
}

void Z16::set_W (WORD W_in)
{
  W = W_in;
}

void Z16::compute()
{  
  z= 0;
  //TODO: Shouldn't be hardcoded, but types size must be fixed (WORD, BYTE...) 
  int bitlength = 16;
    
  Bit BitArray[bitlength];
  GetBitArray(W,bitlength,BitArray);

  //TODO: Performance. Loop fusion?
  //L1
  for(int i=0;i<8;i++) 
  {   
    OrL1[i].set_in1(BitArray[i*2]);
    OrL1[i].set_in2(BitArray[i*2+1]);
  }

  //L2
  for(int i=0;i<4;i++) 
  {   	
    OrL2[i].set_in1(OrL1[i*2].get_out());
    OrL2[i].set_in2(OrL1[i*2+1].get_out());
  }

  //L3
  for(int i=0;i<2;i++) 
  {   
    OrL3[i].set_in1(OrL2[i*2].get_out());
    OrL3[i].set_in2(OrL2[i*2+1].get_out());
  }

  OrL4.set_in1(OrL3[0].get_out());
  OrL4.set_in2(OrL3[1].get_out());
  NOT.set_in(OrL4.get_out());
  z = NOT.get_out();

}

Bit Z16::get_z()
{  
  compute();
  return z;
}

