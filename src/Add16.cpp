#include "Utils.h"
#include "Add16.h"

Add16::Add16()
{
  X = rand();
  Y = rand();
}

Add16::Add16(WORD X_in, WORD Y_in)
{
  X = X_in;
  Y = Y_in;  
}

void Add16::set_X (WORD X_in)
{
  X = X_in;
}

void Add16::set_Y (WORD Y_in)
{
  Y = Y_in; 
}


void Add16::compute()
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
    FA[i].set_a(X_BitArray[i]);
    FA[i].set_b(Y_BitArray[i]);
    FA[i].set_carry_in(i == 0 ? 0:FA[i-1].get_carry_out());

    //We compute the i bit of W. We must add it factorizating
    W += FA[i].get_out()<<i; 
  }
  carry_out = FA[15].get_carry_out();
}

WORD Add16::get_W()
{  
  compute();
  return W;
}

Bit Add16::get_carry_out()
{
  compute();
  return carry_out;
}

