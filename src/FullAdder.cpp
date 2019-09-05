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
  out = (a+b+carry_in)&1;
  //carry_out is Bit type and we use the 2nd lsb of add result so we must shit the valued bit to lsb
  carry_out = ((a+b+carry_in)&2) >> 1;
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




