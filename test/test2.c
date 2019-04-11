#include <stdio.h>
int main(void)
{
    int (*pt2)[4];
    pt2 = (int[2][4]) {{1, 2, 3, 4},
                       {5, 6, 7, 8}};

    printf("%d\n", pt2[1][0]);

    return 0;
}