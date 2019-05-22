#include <stdio.h>

int main(void)
{
    int i = 10;
    int *restrict pt = &i;
    int *pt2 = &i;
    
    *pt += 10;
    *pt2 += 10;

    printf("%d\n", i);

    return 0;
}