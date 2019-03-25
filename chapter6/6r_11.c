#include <stdio.h>
#define SIZE 8
int main(void)
{
    int by_twos[SIZE];
    int index;

    for (index = 0; index < SIZE - 1; index++)
    {
        by_twos[index] = 2 + (index * 2);
        printf("%d ", by_twos[index]);
    }

    return 0;
}