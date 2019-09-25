#ifndef ADD16Z_H
#define ADD16Z_H

#include "Utils.h"
#include "FullAdder.h"
#include "Xor2.h"

class Add16Z{
  private:
    FullAdder FA[16];
    Xor2 XOR;
    WORD X;
    WORD Y;
    WORD W;
    Bit  carry_out;
    //Without carry_in

    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    Add16Z();
    Add16Z(WORD X_in, WORD Y_in);

    //Get and Set
    void set_X (WORD X_in);
    void set_Y (WORD Y_in);
    WORD get_W();
    Bit get_carry_out();
};

#endif /* ADD16Z_H */
