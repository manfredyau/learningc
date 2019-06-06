#define EVEN_GT(X, Y) (X > Y && X % 2 == 0)?1:0

#include <stdio.h>

int main(void)
{
    printf("%d\n", EVEN_GT(8, 5));

    return 0;
}