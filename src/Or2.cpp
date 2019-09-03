#include "Or2.h"

OR2::OR2()
{
  in1 = rand();
  in2 = rand();
}

OR2::OR2(Bit a,Bit b)
{
  in1 = a;
  in2 = b;
}

void OR2::set_in1(Bit a)
{
  in1 = a;
}

void OR2::set_in2(Bit b)
{
  in2 = b;
}

Bit OR2::get_out() {
  out = in1&in2;
  return out;
}
