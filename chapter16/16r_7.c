#define PRT(X) printf("name: "#X"; value: %d; address: %p\n", X, &X)

#include <stdio.h>

int main(void)
{
    int i = 90;
    PRT(i);

    return 0;
}