#include <stdio.h>
#define A 'A'
int main(void)
{
    char ch;
    int space;
    printf("Enter a litter: ");
    scanf("%c", &ch);

    for (int i = 0; i <= (space = ch - A); ++i)
    {
        char start = A;
        for (int j = i; j < space; ++j)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; ++k)
        {
            printf("%c", start++);
        }

        start -= 1;
        for (int l = 0; l < i; ++l)
        {
            printf("%c", --start);
        }

        printf("\n");
    }

    return 0;
}