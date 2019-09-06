#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <math.h>
using namespace std;

//TODO: Fix why short sized data doesn't work. ADD16 Case 1
typedef int BYTE;
typedef int WORD;
typedef int Bit;

extern int passed;
extern int failed;


void evaluate(int expected, int calculated);
