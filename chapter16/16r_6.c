#include <stdio.h>
#define TWENTY_FIVE 25
#define SPACE ' '
#define PS() putchar(' ')
#define BIG(X) ((X) + 3)
#define SUMSQ(X, Y) ((X) * (X) + (Y) * (Y))

int main(void)
{
    printf("%d", SUMSQ(2, 3));

    return 0;
}