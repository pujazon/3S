#ifndef SUB16_H
#define SUB16_H

#include "Utils.h"
#include "FullSubstractor.h"

class Sub16 {
  private:
    FullSubstractor FS[16];
    WORD X;
    WORD Y;
    WORD W;
    Bit  borrow;
    //Without carry_in

    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    Sub16();
    Sub16(WORD X_in, WORD Y_in);

    //Get and Set
    void set_X (WORD X_in);
    void set_Y (WORD Y_in);
    WORD get_W();
    Bit get_borrow();
};

#endif /* SUB16_H */

