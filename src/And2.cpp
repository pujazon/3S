#include "And2.h"

AND2::AND2()
{
  in1 = rand();
  in2 = rand();
}

AND2::AND2(Bit a,Bit b)
{
  in1 = a;
  in2 = b;
}

void AND2::set_in1(Bit a)
{
  in1 = a;
}

void AND2::set_in2(Bit b)
{
  in2 = b;
}

Bit AND2::get_out()
{
  out = in1&in2;
  return out;
}
