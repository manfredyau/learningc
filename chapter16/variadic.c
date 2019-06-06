#include <stdio.h>
#include <math.h>
#define PR(X ,...) printf("Message " #X ": " __VA_ARGS__)
#define PR2(...) printf(__VA_ARGS__)
int main(void)
{
    PR("A", "____HELLO_WORLD %d \n\n\n",13);
    return 0;
}