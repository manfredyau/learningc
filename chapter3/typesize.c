#include <stdio.h>
int main(void)
{
    printf("Type int has a size of %lu bytes.\n", sizeof(int));
    printf("Type char has size of %zd bytes.\n", sizeof(char));
    printf("Type long has size of %zd bytes.\n", sizeof(long));
    printf("Type long long has size of %zd bytes.\n", sizeof(long long));
    printf("Type double has size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    int i = 1.99;
    printf("%d\n", i);
    return 0;
}