#include <stdio.h>
unsigned long Fibonacci(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    while (scanf("%d", &n) == 1)
    {
        printf("%lu\n", Fibonacci(n));
        printf("Continue: ");
    }

    return 0;
}

unsigned long Fibonacci(int n)
{
    if (n < 1)
    {
        return 0LU;
    }
    unsigned long previous = 0LU;
    unsigned long current = 1LU;

    for (int i = 1; i < n; i++)
    {
        unsigned long temp = previous;
        previous = current;
        current = current + temp;
    }

    return current;
}