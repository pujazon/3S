#ifndef LEU_H
#define LEU_H

#include "Utils.h"
#include "Sub16.h"
#include "Z16.h"

class Leu {
  private:
    WORD X;
    WORD Y;
    Bit  w;
    Sub16 SUB;
    Z16   Z;
    Or2   OR;

    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    Leu();
    Leu(WORD X_in, WORD Y_in);

    //Get and Set
    void set_X (WORD X_in);
    void set_Y (WORD Y_in);
    Bit  get_w();
};

#endif /* LEU_H */
