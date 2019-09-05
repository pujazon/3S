#include "Utils.h"
#include "FullAdder.h"

class Add16 {
  private:
    FullAdder FA[16];
    WORD X;
    WORD Y;
    WORD W;
    Bit  carry_out;
    //Without carry_in

  public:
    //Constructor
    //srand is called in main at begining
    Add16();
    Add16(WORD X_in, WORD Y_in);

    void compute();

    //Get and Set
    void set_X (WORD X_in);
    void set_Y (WORD Y_in);
    WORD get_W();
    Bit get_carry_out();
};

