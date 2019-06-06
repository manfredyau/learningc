#include <stdio.h>

//#define _SKIP_

int main(void)
{
#ifndef _SKIP_
    printf("Don't SKIP.\n");
#endif

    return 0;
}