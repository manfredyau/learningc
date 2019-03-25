#include <stdio.h>
int main(void)
{
    int num;
    char ch;

    scanf("%d%c", &num, &ch);
    printf("%d\n%x\n", num, ch);

    return 0;
}