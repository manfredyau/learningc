#include <stdio.h>
#include <string.h>
int main(void)
{
    char ch, ch1;
    int count = scanf("%c%c", &ch, &ch1);
    printf("%x , %x, and count is: %d\n", ch, ch1, count);
}