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

void GetBitArray(int Bus, int size, Bit *BitArray);
void printBitArray(Bit *BitArray, int size);

#endif /* UTILS_H */
