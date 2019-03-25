#include <stdio.h>
typedef int integer;
int main(void)
{
    integer n = 0;
    size_t intsize;
    intsize = sizeof(integer);
    printf("n = %d, n has %zd bytes; all int have %zd bytes.\n",
           n, sizeof(n), intsize
    );

    return 0;
}