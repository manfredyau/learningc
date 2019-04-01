#include <stdio.h>
#include <stdlib.h>
void chline(char ch, int i, int j);
int main(void)
{
    // This program has not inspect whether the input is valid.
    char ch;
    int rows, columns;
    printf("Enter a character and two number for rows and columns, then I will print it: ");
    ch = getchar();
    scanf("%d %d", &rows, &columns);

    chline(ch, rows, columns);

    return 0;
}
void chline(char ch, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}