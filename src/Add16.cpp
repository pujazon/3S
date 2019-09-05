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

  printf("X = %d, Y = %d\n",this->X,this->Y);
  this->W = 0;
  for(int i=0;i<=16;i++) 
  {
    FA[i].set_a(this->X&(i+1));
    FA[i].set_b(this->Y&(i+1));
    FA[i].set_carry_in(i == 0 ? 0:FA[i-1].get_carry_out());
    FA[i].compute();

    //We compute the i bit of W. We must add it factorizating
    this->W += FA[i].get_out()*pow(2,i);   
  }
  this->carry_out = FA[16].get_carry_out();

  printf("W == %d, Carry Out = %d\n",W,carry_out);

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

