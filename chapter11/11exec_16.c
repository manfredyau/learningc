#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE  500
int main(int argc, char *argv[]) {
    char str[SIZE];
    char ch;
    int i = 0;
    puts("Enter strings: ");
    while ((ch = getchar()) != EOF && i < SIZE - 1) {
        if (ch == '|') {
            break;
        }
        str[i++] = ch;
    }

    // 最後要記得放入空字符
    str[i] = '\0';

    if (argc == 1 || !strcmp(argv[1], "-p")) {
        puts(str);
    } else if (!strcmp(argv[1], "-u")) {
        int j;
        for (j = 0; j < i; j++) {
            str[j] = toupper(str[j]);
        }
        puts(str);
    } else if (!strcmp(argv[1], "-l")) {
        int j;
        for (j = 0; j < i; j++) {
            str[j] = tolower(str[j]);
        }
        puts(str);
    } else {
        puts("Wrong argument.");
    }

    return 0;
}