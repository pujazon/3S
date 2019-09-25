#ifndef XOR2_H
#define XOR2_H

#include "Utils.h"

class Xor2 {
  private:
    Bit in1, in2, out;
    Bit compute();

  public:
    //Constructor
    //srand is called in main at begining
    Xor2();
    Xor2(Bit a, Bit b);

    //Get and Set
    void set_in1 (Bit a);
    void set_in2 (Bit b);
    Bit get_out();
    Bit get_out(Bit a, Bit b);
};

#endif /* XOR2_H */
