#include "FullAdder.h"

FullAdder::FullAdder()
{
  a = rand();
  b = rand();
  carry_in = rand();
}

FullAdder::FullAdder(Bit a_in, Bit b_in, Bit c_in)
{
  a = a_in;
  b = b_in;
  carry_in = c_in;
}

void FullAdder::set_a (Bit a_in)
{
  a = a_in;
}

void FullAdder::set_b (Bit b_in)
{
  b = b_in;
}

void FullAdder::set_carry_in (Bit c)
{
  carry_in = c;
}

void FullAdder::compute()
{
  out = (a+b+carry_in)&0x01;
  carry_out = ( a+b+carry_in > 1 ? 1:0);
}

Bit FullAdder::get_out()
{
  compute();
  return out; 
}

Bit FullAdder::get_carry_out()
{
  compute();
  return carry_out;
}




