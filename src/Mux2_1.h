#include "Utils.h"

class MUX2_1 {
  private:
    Bit a, b, s, out;

  public:
    //Constructor
    //srand is called in main at begining
    MUX2_1();
    MUX2_1(Bit a_in, Bit b_in, Bit s_in);

    //Get and Set
    void set_a (Bit a_in);
    void set_b (Bit b_in);
    void set_s (Bit s_in);
    Bit get_out();
};
