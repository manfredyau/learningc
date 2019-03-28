#include <stdio.h>
#include <ctype.h>
#include <string.h>
int smile(int);
int main(void)
{
    smile(-1);
    return 0;
}

int smile(int n)
{
    printf("Smile!");
    if (n != 1) return smile(n - 1);
    return printf("\n");
}
