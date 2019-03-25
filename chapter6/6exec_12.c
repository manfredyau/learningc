#include <stdio.h>
#include <math.h>
int main(void)
{
    int count;
    printf("Enter a count:  ");
    scanf("%d", &count);

    double sum1 = 0.0;
    double sum2 = 0.0;
    for (int i = 1, sign = 1; i <= count; ++i, sign *= -1)
    {
        sum1 += 1.0 / (double) i;
//        sum2 += pow(-1, i + 1) / (double) i;
        sum2 += sign / (double) i;
    }

    printf("The sum is %lf", sum1 + sum2);

    return 0;
}