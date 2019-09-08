#ifndef UTILS_H
#define UTILS_H

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

//TODO: 4 bytes for each bit (128 bytes for each 4 bytes bitarray). Bad Memory Usage
void GetBitArray(int Bus, int bitlength, Bit *BitArray);
void printBitArray(Bit *BitArray, int bitlength);

#endif /* UTILS_H */
