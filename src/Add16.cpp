#include "Utils.h"
#include "Add16.h"

Add16::Add16()
{
  X = rand();
  Y = rand();
}

Add16::Add16(WORD X_in, WORD Y_in)
{
  X = X_in;
  Y = Y_in;  
}

void Add16::set_X (WORD X_in)
{
  X = X_in;
}

void Add16::set_Y (WORD Y_in)
{
  Y = Y_in; 
}


void Add16::compute()
{  
  WORD W_tmp= 0;

  printf("X = %d, Y = %d\n",X,Y);
  printf("W == %d, Carry Out = %d\n",W_tmp,carry_out);  

  for(int i=0;i<=16;i++) 
  {
 //   printf("i = %d\n",i);
//    printf("FA[i].set_a = X&(i+1) = %d\n",(X&(i+1))>>i);
 //   printf("FA[i].set_b = X&(i+1) = %d\n",(Y&(i+1))>>i);
   // printf("FA[i].set_carry_in = carry_out[i-1] = %d\n",(i == 0 ? 0:FA[i-1].get_carry_out()));

    //Mask with &(i+1) returns the bit in the i position. We must shift it to get the bit in lsb.
    FA[i].set_a((X&(i+1))>>i);
    FA[i].set_b((Y&(i+1))>>i);
    FA[i].set_carry_in(i == 0 ? 0:FA[i-1].get_carry_out());

 // printf("W == %d, Carry Out = %d\n",W_tmp,carry_out);  
    //Computation is made on getters
  //  printf("FA[i].get_out()= %d\n",FA[i].get_out());
   // printf("FA[i].get_carry_out() = %d\n",FA[16].get_carry_out());

    printf("W == %d, Carry Out = %d\n",W_tmp,carry_out);  
    //We compute the i bit of W. We must add it factorizating
    W_tmp += FA[i].get_out()*pow(2,i); 

   //printf("W == %d, Carry Out = %d\n",W_tmp,carry_out);  
  }

  W = W_tmp;
  carry_out = FA[16].get_carry_out();
  printf("compute W == %d, Carry Out = %d\n",W,carry_out);
  printf("compute &W == %d, &Carry Out = %d\n",&W,&carry_out);



}

WORD Add16::get_W()
{  
  compute();
  printf("out W W == %d, Carry Out = %d\n",W,carry_out);
  printf("W &W == %d, &Carry Out = %d\n",&W,&carry_out);
  return W;
}

Bit Add16::get_carry_out()
{
  compute();
  printf("out carry W == %d, Carry Out = %d\n",W,carry_out);
  return carry_out;
}

