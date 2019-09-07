#include "Or2.h"

Or2::Or2()
{
  in1 = rand();
  in2 = rand();
}

Or2::Or2(Bit a,Bit b)
{
  in1 = a;
  in2 = b;
}

void Or2::set_in1(Bit a)
{
  in1 = a;
}

void Or2::set_in2(Bit b)
{
  in2 = b;
}

Bit Or2::get_out() {
  out = in1|in2;
  return out;
}
