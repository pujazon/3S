#include "Leu.h"

Leu::Leu()
{
  X = rand();
  Y = rand();
}

Leu::Leu(WORD X_in, WORD Y_in)
{
  X = X_in;
  Y = Y_in; 
}

void Leu::set_X (WORD X_in)
{
  X = X_in;
}

void Leu::set_Y (WORD Y_in)
{
  Y = Y_in; 
}

void Leu::compute()
{
  SUB.set_X(X);
  SUB.set_Y(Y);
  Z.set_W(SUB.get_W());
  OR.set_in1(Z.get_z());
  OR.set_in2(SUB.get_borrow());
  w = OR.get_out();

}

Bit Leu::get_w() {
  compute(); 
  return w;
}

