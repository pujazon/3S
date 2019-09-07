#include "And2.h"

And2::And2()
{
  in1 = rand();
  in2 = rand();
}

And2::And2(Bit a,Bit b)
{
  in1 = a;
  in2 = b;
}

void And2::set_in1(Bit a)
{
  in1 = a;
}

void And2::set_in2(Bit b)
{
  in2 = b;
}

Bit And2::get_out()
{
  out = in1&in2;
  return out;
}
