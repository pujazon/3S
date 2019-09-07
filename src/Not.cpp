#include "Not.h"

Not::Not()
{
  in = rand();
}

Not::Not(Bit a)
{
  in = a;
}

void Not::set_in(Bit a)
{
  in = a;
}

Bit Not::get_out() {
  out = !in; 
  return out;
}
