#include <stdio.h>
double harmonic_average(double, double);
int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%f\n", harmonic_average(a, b));

    return 0;
}

double harmonic_average(double a,double b)
{
    double r1 = 1 / a, r2 = 1 / b;

    return 1 / ((r1 + r2) / 2);
}