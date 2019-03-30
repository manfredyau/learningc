#include <stdio.h>
#include <ctype.h>
void read(void);
int get_char_position(char ch);
int main(void)
{
    printf("Enter some characters: ");
    read();

    return 0;
}
void read(void)
{
    int ch;
    int position;
    while ((ch = getchar()) != EOF)
    {
        if (isspace(ch))
        {
            continue;
        }
        position = get_char_position((char) ch);
        if (position != -1)
        {
            printf("The position of %c in table is: %d.\n", ch, position);
        }
        else
        {
            printf("Your input is not a letter.\n");
        }
    }
}

int get_char_position(char ch)
{
    if (isupper(ch))
    {
        return ch - 'A' + 1;
    }
    else if (islower(ch))
    {
        return ch - 'a' + 1;
    }
    else
    {
        return -1;
    }
}