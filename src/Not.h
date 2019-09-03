#include "Utils.h"

class NOT {
  private:
    Bit in, out;

  public:
    //Constructor
    //srand is called in main at begining
    NOT();
    NOT(Bit a);

    //Get and Set
    void set_in (Bit a);
    Bit get_out();
};
