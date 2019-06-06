#include <stdio.h>
#include "functions.h"
#if __STDC_VERSION__ != 201112L
#error Not C11
#endif
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#define one 1
#define function void f() \
{printf("HELLO WORLD\n");}
struct A{
    char ch;
    char ch1;
    int i;
    int i1;
};
struct B{
    unsigned a: 3;
    unsigned b: 2;
};
int invert_end(int value, int bits)
{
    int mask = 0;
    int bitvalue = 1;
    while (bits--)
    {
        mask |= bitvalue;
        bitvalue <<= 1;
    }

    return value ^ mask;
}
function

extern void psth(void);
extern void doit(void);

extern double square(double);
int main(void)
{
    doit();
//    square(30);
    return 0;
}


