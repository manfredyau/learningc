#include <stdio.h>
#include <ctype.h>
void print(char, int, int);
char get_a_char();
int get_a_int();
int main(void)
{
    char ch;
    int times_per_line, lines;

    printf("Please enter a character but not a space: ");
    ch = get_a_char();
    printf("Please enter a number as times per line: ");
    times_per_line = get_a_int();
    printf("Please enter a number as line: ");
    lines = get_a_int();

    print(ch, times_per_line, lines);
    return 0;
}

void print(char ch, int times_per_line, int lines)
{
    for (int i = 0; i < lines; ++i)
    {
        for (int j = 0; j < times_per_line; ++j)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}

char get_a_char()
{
    int ch;
    ch = getchar();
    while (isspace(ch))
    {
        printf("Enter a not space character, eg. a, b, c...: ");
        ch = getchar();
    }

    while (getchar() != '\n');

    return (char) ch;

}

int get_a_int()
{
    int num;

    while ((scanf("%d", &num)) != 1)
    {
        printf("You should enter a number, eg. 23, 1212, 334: ");
        scanf("%d", &num);

        while (getchar() != '\n')
        { ;
        }
    }

    return num;

}