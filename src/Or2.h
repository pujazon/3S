#ifndef OR2_H
#define OR2_H

#include "Utils.h"

class Or2 {
  private:
    Bit in1, in2, out;

  public:
    //Constructor
    //srand is called in main at begining
    Or2();
    Or2(Bit a, Bit b);

    //Get and Set
    void set_in1 (Bit a);
    void set_in2 (Bit b);
    Bit get_out();
};

#endif /* OR2_H */
