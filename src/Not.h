#ifndef NOT_H
#define NOT_H

#include "Utils.h"

class Not {
  private:
    Bit in, out;

  public:
    //Constructor
    //srand is called in main at begining
    Not();
    Not(Bit a);

    //Get and Set
    void set_in (Bit a);
    Bit get_out();
};

#endif /* NOT_H */
