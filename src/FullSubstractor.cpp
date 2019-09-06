#include "FullSubstractor.h"

FullSubstractor::FullSubstractor()
{
  a = rand();
  b = rand();
  carry_in = rand();
}

FullSubstractor::FullSubstractor(Bit a_in, Bit b_in, Bit c_in)
{
  a = a_in;
  b = b_in;
  carry_in = c_in;
}

void FullSubstractor::set_a (Bit a_in)
{
  a = a_in;
}

void FullSubstractor::set_b (Bit b_in)
{
  b = b_in;
}

void FullSubstractor::set_carry_in (Bit c)
{
  carry_in = c;
}

void FullSubstractor::compute()
{ 
  out = (a-b-carry_in);
  borrow = 0;
  if(out < 0)
  {
    out = out+2;
    borrow = 1;
  }
}

Bit FullSubstractor::get_out()
{
  compute();
  printf("out = %d;borrow = %d\n",out,borrow);
  return out; 
}

Bit FullSubstractor::get_borrow()
{
  compute();
  printf("out = %d;borrow = %d\n",out,borrow);
  return borrow;
}




