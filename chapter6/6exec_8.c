#include <stdio.h>
double calc(double a, double b);
int main(void)
{
    double a, b;
    printf("Please enter 2 float numbers: ");
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("(%.2f - %.2f) / (%.2f * %.2f) = %.2f\n", a, b, a, b, calc(a, b));
    }

    return 0;
}

double calc(double a, double b)
{
    return (a - b) / (a * b);
}