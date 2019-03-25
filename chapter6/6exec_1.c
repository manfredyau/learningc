#include <stdio.h>
int main(void)
{
    char litters[26];
    for (int i = 0; i < sizeof(litters); ++i)
    {
        litters[i] = 'a' + i;
        printf("%c ", litters[i]);
    }

    return 0;
}