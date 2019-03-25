#include <stdio.h>
int main(void)
{
    int count = 0;
    while (getchar() != EOF)
    {
        ++count;
    }

    printf("There are %d characters.\n", count);
    return 0;
}