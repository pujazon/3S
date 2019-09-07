#ifndef FULLADDER_H
#define FULLADDER_H

#include "Utils.h"

class FullAdder {
  private:
    Bit carry_in,a,b,out,carry_out;
    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    FullAdder();
    FullAdder(Bit a_in, Bit b_in, Bit c_in);

    //Get and Set
    void set_a (Bit a_in);
    void set_b (Bit b_in);
    void set_carry_in (Bit c);
    Bit get_out();
    Bit get_carry_out();
};

#endif /* FULLADDER_H */

