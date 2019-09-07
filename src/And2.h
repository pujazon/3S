#ifndef AND2_H
#define AND2_H

#include "Utils.h"

class And2 {
  private:
    Bit in1, in2, out;

  public:
    //Constructor
    //srand is called in main at begining
    And2();
    And2(Bit a, Bit b);

    //Get and Set
    void set_in1 (Bit a);
    void set_in2 (Bit b);
    Bit get_out();
};

#endif /* AND2_H */
