#include "Mux2_1.h"

MUX2_1::MUX2_1()
{
  a = rand();
  b = rand();
  s = rand();
}

MUX2_1::MUX2_1(Bit a_in,Bit b_in,Bit s_in)
{
  a = a_in;
  b = b_in;
  s = s_in;
}

void MUX2_1::set_a(Bit a_in)
{
  a = a_in;
}

void MUX2_1::set_b(Bit b_in)
{
  b = b_in;
}

void MUX2_1::set_s(Bit s_in)
{
  s = s_in;
}

Bit MUX2_1::get_out()
{
  out = (s ? b : a);
  return out;
}
