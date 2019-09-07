#include "Eq.h"

Eq::Eq()
{
  X = rand();
  Y = rand();
}

Eq::Eq(WORD X_in, WORD Y_in)
{
  X = X_in;
  Y = Y_in; 
}

void Eq::set_X (WORD X_in)
{
  X = X_in;
}

void Eq::set_Y (WORD Y_in)
{
  Y = Y_in; 
}

void Eq::compute()
{
  SUB.set_X(X);
  SUB.set_Y(Y);
  Z.set_W(SUB.get_W());
  w = Z.get_z();

}

Bit Eq::get_w() {
  compute(); 
  return w;
}

