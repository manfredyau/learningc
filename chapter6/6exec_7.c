#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[30];
    printf("Enter a word please: ");
    scanf("%s", word);

    for (int i = (int)strlen(word); i >=0 ; --i)
    {
        printf("%c", word[i]);
    }

    printf("\n");

    return 0;
}