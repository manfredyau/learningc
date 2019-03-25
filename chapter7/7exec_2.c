#include <stdio.h>
const int SIZE = 100;
const int RESULT_PER_LINE = 8;
int main(void)
{
    int count = 0;
    char ch;
    while (count < SIZE && (ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            count = 0;
            printf("\n");
            continue;
        }
        ++count;
        printf("[%c - %d]%c", ch, ch,
               count % RESULT_PER_LINE == 0 ? '\n' : '\0'
        );

    }

    return 0;
}