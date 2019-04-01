#include <stdio.h>
double min(double, double);
int main(void)
{
    double a, b;
    double min_value;
    printf("Enter two numbers for compare who is the min: ");
    while (scanf("%lf %lf", &a, &b) != 2)
    {
        printf("You need to retype two number: ");
        scanf("%lf %lf", &a, &b);
    }
    min_value = min(a,b);

    printf("The min value is: %f.\n", min_value);

    return 0;
}

double min(double a, double b)
{
    return a < b ? a : b;
}