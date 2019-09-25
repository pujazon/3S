#ifndef ADD16N_H
#define ADD16N_H

#include "Utils.h"
#include "FullAdder.h"

class Add16N {
  private:
    FullAdder FA[16];
    WORD X;
    WORD Y;
    WORD W;
    Bit  carry_out;
    //Without carry_in

    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    Add16N();
    Add16N(WORD X_in, WORD Y_in);

    //Get and Set
    void set_X (WORD X_in);
    void set_Y (WORD Y_in);
    WORD get_W();
    Bit get_carry_out();
};

#endif /* ADD16_H */

