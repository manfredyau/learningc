#include <stdio.h>
int main(void)
{
    printf("%12.2e\n", 233.0);
    printf("%.8s\n", "abcdefghij");
    printf("%6.4d\n", 1);
    int a;
    char c;
    scanf("%d %c", &a, &c);
    printf("%d, %#X\n", a, c);
    return 0;
}