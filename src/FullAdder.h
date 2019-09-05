#include "Utils.h"

class FullAdder {
  private:
    Bit carry_in,a,b,out,carry_out;

  public:
    //Constructor
    //srand is called in main at begining
    FullAdder();
    FullAdder(Bit a_in, Bit b_in, Bit c_in);

    //TODO: Decide if it's better use a specific method to compute the values instead of
    //calculating on getters becuase could be any input set before getting all outputs, due to being different variables.
    //Atomic idea.

    //SOL: We may only want to update the values, no get them.
    void compute();

    //Get and Set
    void set_a (Bit a_in);
    void set_b (Bit b_in);
    void set_carry_in (Bit c);
    Bit get_out();
    Bit get_carry_out();
};

