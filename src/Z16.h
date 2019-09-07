#ifndef Z16_H
#define Z16_H

#include "Utils.h"
#include "Or2.h"
#include "Not.h"

class Z16 {
  private:
    WORD W;
    Bit  z;
    Or2 OrL1[8];
    Or2 OrL2[4];
    Or2 OrL3[2];
    Or2 OrL4;
    Not NOT;

    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    Z16();
    Z16(WORD W);

    //Get and Set
    void set_W (WORD W_in);
    Bit  get_z();
};

#endif /* Z16_H */
