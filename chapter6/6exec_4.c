#include <stdio.h>
int main(void)
{
    char start = 'A';
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            printf("%c", start++);
        }
        printf("\n");
    }

    return 0;
}