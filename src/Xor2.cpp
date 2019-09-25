#include "Xor2.h"

Xor2::Xor2()
{
  in1 = rand();
  in2 = rand();
}

Xor2::Xor2(Bit a,Bit b)
{
  in1 = a;
  in2 = b;
}

void Xor2::set_in1(Bit a)
{
  in1 = a;
}

void Xor2::set_in2(Bit b)
{
  in2 = b;
}

Bit Xor2::compute() {
  return in1^in2;  
}

//TODO: this method with arguments must be set to all logaical gates
//		or change get_out to compute() and get_out can have different calls but process
//		is done by compute()

Bit Xor2::get_out() {
  out = compute();
  return out;
}

Bit Xor2::get_out(Bit a, Bit b) {
  in1 = a;
  in2 = b;
  
  out = compute();
  return out;
}
