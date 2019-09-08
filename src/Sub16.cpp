#include "Utils.h"
#include "Sub16.h"

Sub16::Sub16()
{
  X = rand();
  Y = rand();
}

Sub16::Sub16(WORD X_in, WORD Y_in)
{
  X = X_in;
  Y = Y_in;  
}

void Sub16::set_X (WORD X_in)
{
  X = X_in;
}

void Sub16::set_Y (WORD Y_in)
{
  Y = Y_in; 
}


void Sub16::compute()
{  
  W= 0; 
  //TODO: Shouldn't be hardcoded, but types size must be fixed (WORD, BYTE...) 
  int bitlength = 16;
    
  Bit X_BitArray[bitlength];
  Bit Y_BitArray[bitlength];
  GetBitArray(X,bitlength,X_BitArray);
  GetBitArray(Y,bitlength,Y_BitArray);

  for(int i=0;i<=15;i++) 
  {    
    FS[i].set_a(X_BitArray[i]);
    FS[i].set_b(Y_BitArray[i]);
    FS[i].set_carry_in(i == 0 ? 0:FS[i-1].get_borrow());

    //We compute the i bit of W. We must add it Factorizating
    W += FS[i].get_out()<<i; 
  }
  borrow = FS[15].get_borrow();
}

WORD Sub16::get_W()
{  
  compute();
  return W;
}

Bit Sub16::get_borrow()
{
  compute();
  return borrow;
}

