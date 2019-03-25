#include <stdio.h>
int main(void)
{
    char start = 'F';
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            printf("%c", start--);
        }
        start = 'F';
        printf("\n");
    }

    return 0;
}