#include "Ltu.h"

Ltu::Ltu()
{
  X = rand();
  Y = rand();
}

Ltu::Ltu(WORD X_in, WORD Y_in)
{
  X = X_in;
  Y = Y_in; 
}

void Ltu::set_X (WORD X_in)
{
  X = X_in;
}

void Ltu::set_Y (WORD Y_in)
{
  Y = Y_in; 
}

void Ltu::compute()
{
  SUB.set_X(X);
  SUB.set_Y(Y);
  w = SUB.get_borrow();

}

Bit Ltu::get_w() {
  compute(); 
  return w;
}

