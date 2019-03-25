#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main(void)
{
    int n_chars = 0;
    int n_spaces = 0;
    int n_lines = 0;
    char ch;

    printf("Enter any chars: ");
    while ((ch = getchar()) != '#')
    {
        if (!isspace(ch))
        {
            n_chars++;
        }
        else if (ch == ' ')
        {
            n_spaces++;
        }
        else if (ch == '\n')
        {
            n_lines++;
        }
    }

    printf("There are %d chars, %d spaces and %d lines.\n", n_chars, n_spaces, n_lines);

    return 0;
}