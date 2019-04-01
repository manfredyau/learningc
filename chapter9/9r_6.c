#include <stdio.h>
void alter(int *, int *);
int main(void)
{
    int a = 14, b = 129;
    printf("Ordinary a = %d, b = %d.\n", a, b);
    alter(&a, &b);
    printf("Now a = %d and b = %d.\n", a, b);

    return 0;
}

void alter(int * x, int * y)
{
    int one, two;
    one = *x + *y;
    two = *x - *y;

    *x = one;
    *y = two;
}