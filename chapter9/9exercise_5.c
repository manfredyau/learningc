#include <stdio.h>
void large_of(double *, double *);
int main(void)
{
    double a = 3.14, b = 5.12;
    large_of(&a, &b);
    printf("After call large_of(), a = %.2f and b = %.2f.\n", a, b);

    return 0;
}

void large_of(double *a, double *b)
{
    if (*a > *b)
    {
        *b = *a;
    }
    else
    {
        *a = *b;
    }
}