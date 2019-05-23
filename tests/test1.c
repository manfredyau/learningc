#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    int arr[] = {1,2,3,4,5};
    void *arr2 = arr;
    printf("%zd\n", sizeof(void) );
    printf("%d\n", arr2 + 1 );
    return 0;
}

