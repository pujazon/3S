#include "Not.h"

NOT::NOT()
{
  in = rand();
}

NOT::NOT(Bit a)
{
  in = a;
}

void NOT::set_in(Bit a)
{
  in = a;
}

Bit NOT::get_out() {
  out = !in; 
  return out;
}
