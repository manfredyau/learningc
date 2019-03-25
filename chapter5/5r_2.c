#include <stdio.h>
int main(void)
{
    printf("%f\n", 30.0 / 4.0 * 5.0);
    printf("%f\n", 30.0 / (4.0 * 5.0));
    printf("%d\n", 30 / 4 * 5);
    printf("%d\n", 30 * 5 / 4);
    printf("%f\n", 30 / 4.0 * 5);
    printf("%f\n", 30 / 4 * 5.0);
    return 0;
}