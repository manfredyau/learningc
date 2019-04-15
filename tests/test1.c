#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100];
    printf("%p\n", str);
    printf("%p\n", gets(str));
    return 0;
}