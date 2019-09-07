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

  //Readeable code
  int local_in1,local_in2 = 0; 

  //TODO: Performance. Loop fusion?
  //L1
  for(int i=0;i<8;i++) 
  {   
    //Mask on i-th bit of W and set it to lsb	
    local_in1 = (W&(1<<(i*2)))>>(i*2);
    local_in2 = (W&(1<<(i*2+1)))>>(i*2+1);
    OrL1[i].set_in1(local_in1);
    OrL1[i].set_in2(local_in2);
  }

  //L2
  for(int i=0;i<4;i++) 
  {   	
    local_in1 = OrL1[i*2].get_out();	
    local_in2 = OrL1[i*2+1].get_out();
    OrL2[i].set_in1(local_in1);
    OrL2[i].set_in2(local_in2);
  }

  //L3
  for(int i=0;i<2;i++) 
  {   
    local_in1 = OrL2[i*2].get_out();	
    local_in2 = OrL2[i*2+1].get_out();
    OrL3[i].set_in1(local_in1);
    OrL3[i].set_in2(local_in2);
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

