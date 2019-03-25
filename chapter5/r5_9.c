#include <stdio.h>
int main(void)
{
    int n = 'a' - 1;
    while (n < 'g') {
        printf("%5c", ++n);
    }

    return 0;
}