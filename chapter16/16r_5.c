#define PRINT_EXP_AND_VAL(ARG) printf(#ARG" is %d\n",ARG)

#include <stdio.h>
int main(void)
{
    PRINT_EXP_AND_VAL(4 * 4);

    return 0;
}