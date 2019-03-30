#include <stdio.h>
double power(double, int);
int main(void)
{
    double num;
    int p;
    printf("Enter two numbers: ");
    while ((scanf("%lf %d", &num, &p)) == 2)
    {
        printf("Result is: %.2f.\n", power(num, p));
        printf("Enter two numbers: ");
    }

    return 0;
}

double power(double n, int p)
{
    double result = 1;
    if (n == 0)
    {
        if (p == 0)
        {
            printf("There is no 0 ^ 0.\n");
            return 1;
        }
        return 0;
    }

    if (p > 0 || p < 0)
    {
        for (int i = 0; i < (p < 0 ? -p : p); ++i)
        {
            result *= n;
        }

        if (p < 0)
        {
            result = 1 / result;
        }
    }
    else
    {
        return 1;
    }

    return result;
}