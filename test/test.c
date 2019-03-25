#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;

    printf("Please enter a letter: \n");

    while ((ch = getchar()) != EOF)
    {
        printf("%d,\n", isalpha(ch));
    }

    printf("FINISH");
    return 0;
}