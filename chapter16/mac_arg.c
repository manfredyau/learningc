#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X)

int main(void)
{
    int x = 5;
    int z;

    printf("x = %d\n", x);
    z = SQUARE(x);    // z = 25;
    printf("Evaluating SQUARE(x): ");
    PR(z);              // 25
    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x + 2));    // 49
    printf("Evaluating 100/SQUARE(2): ");
    PR(100 / SQUARE(2));  // 25
    printf("x is %d.\n", x);
    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x));
    printf("After incrementing, x is %x.\n", x);

    return 0;
}