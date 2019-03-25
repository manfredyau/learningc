#include <stdio.h>
#define SIZE 8
int main(void)
{
    int nums[SIZE];

    printf("Enter 8 number: ");
    for (int i = 0; i < SIZE; ++i)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = SIZE - 1; i >= 0; --i)
    {
        printf("%d", nums[i]);
    }

    return 0;
}