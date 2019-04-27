#include "stdio.h"
void f(char (*argv)[]);
int main(int a, char *b[]) {
    int count;

    printf("The command line has %d arguments:\n", a - 1);
    for (count = 1; count < a; count++)
        printf("%d: %s\n", count, b[count]);

    putchar('\n');
    return 0;
}