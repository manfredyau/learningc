#include <stdio.h>
int main(void)
{
    short ch;
    printf("Enter a ASCII code for a character: ");
    scanf("%hd", &ch);
    printf("%c\n", ch);

    return 0;
}
