#include <stdio.h>

int main(void)
{
    int *ptr;
    int fort[2][2] = {
            {12},
            {14, 16}
    };
    ptr = fort[0];

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d ", fort[i][j]);
        }
        putchar('\n');
    }

    return 0;
}