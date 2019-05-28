#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#define one 1
#define one 2     *    2
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
int main(void)
{
    f();
    PRId32
    return 0;
}


