#ifndef LTU_H
#define LTU_H

#include "Utils.h"
#include "Sub16.h"
#include "Z16.h"

class Ltu {
  private:
    WORD X;
    WORD Y;
    Bit  w;
    Sub16 SUB;

    void compute();

  public:
    //Constructor
    //srand is called in main at begining
    Ltu();
    Ltu(WORD X_in, WORD Y_in);

    //Get and Set
    void set_X (WORD X_in);
    void set_Y (WORD Y_in);
    Bit  get_w();
};

#endif /* Ltu_H */
