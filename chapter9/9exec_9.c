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
    double result = n;
    if (n == 0)
    {
        if (p == 0)
        {
            printf("No definite.\n");
            return 1;
        }

        return 0;
    }

    if (p > 1)
    {
        return result * power(n, p - 1);
    }
    else if (p == 1)
    {
        return n;
    }
    else if (p == 0)
    {
        return 1;
    }
    else
    {
        return 1 / n * power(n, p + 1);
    }
}