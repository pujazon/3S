#include "Utils.h"

class FullSubstractor {
  private:
    Bit a,b,carry_in,out,borrow;
    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    FullSubstractor();
    FullSubstractor(Bit a_in, Bit b_in, Bit c_in);

    //Get and Set
    void set_a (Bit a_in);
    void set_b (Bit b_in);
    void set_carry_in (Bit c);
    Bit get_out();
    Bit get_borrow();
};

