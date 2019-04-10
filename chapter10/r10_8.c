#include <stdio.h>

int main(void)
{
    // a
    int a[] = {1, 2, 4, 8, 16, 32};
    // b
    printf("%d\n", a[2]);
    // c
    int c[100] = {[99] = -1};
    printf("%d\n", c[99]);
    // d
    int d[100] = {[5] = 101, [10] = 10, 11, 12, [3] = 101};
}