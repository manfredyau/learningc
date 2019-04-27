#include <stdio.h>
#include <ctype.h>
char *getword(char *string, int limit) {
    int count = 0;
    char ch;
    // 丟棄所有開頭的空白字符
    while (isspace(ch = getchar())) {

    }
    while (!isspace(ch) && count < limit) {
        if (ch == EOF) {
            return NULL;
        }

        string[count++] = ch;
        ch = getchar();
    }
    string[count] = '\0';
    return string;
}

int main(void) {
    puts("Enter a string: ");
    char str[50];
    char *ptr = getword(str, 7);
    puts(str);
    puts(ptr);

    return 0;
}