#include <stdio.h>
#include <limits.h>

_Static_assert(1, "16-bit char falsely assumed");

int main(void)
{
    puts("char is 16 bits.");

    return 0;
}