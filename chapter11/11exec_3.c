#include <stdio.h>
#include <ctype.h>
char *getword(char *string) {
    char ch;
    char *orig = string;
    // 丟棄所有開頭的空白字符
    while (isspace(ch = getchar())) {

    }
    while (!isspace(ch)) {
        if (ch == EOF) {
            return NULL;
        }

        *string++ = ch;
        ch = getchar();
    }
    *string = '\0';
    return orig;
}

int main(void)
{
    puts("Enter a string: ");
    char str[50];
    char * ptr = getword(str);
    puts(str);
    puts(ptr);

    return 0;
}