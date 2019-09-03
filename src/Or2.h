#include "Utils.h"

class OR2 {
  private:
    Bit in1, in2, out;

  public:
    //Constructor
    //srand is called in main at begining
    OR2();
    OR2(Bit a, Bit b);

    //Get and Set
    void set_in1 (Bit a);
    void set_in2 (Bit b);
    Bit get_out();
};
