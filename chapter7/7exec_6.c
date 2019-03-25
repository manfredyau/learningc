#include <stdio.h>
int main(void)
{
    char current;
    char prev;
    int count = 0;

    while ((current = getchar()) != '#')
    {
        if (prev == 'e' && current == 'i') {
            count++;
        }
        prev = current;
    }

    printf("Times: %d\n", count);

    return 0;
}