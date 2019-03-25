#include <stdio.h>
int main(void)
{
    int count, limit, sum;
    printf("Enter a number and then we will cal the sum:\n");
    scanf("%d", &limit);
    count = 0;
    sum = 0;
    while (count++ < limit)
    {
        sum = sum + count * count;
    }
    printf("sum = %d.\n", sum);

    return 0;
}