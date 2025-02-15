#include "stdio.h"
#include "string.h"
#include "ctype.h"
#define LIMIT 81
void ToUpper(char *str) {
    while (*str) {
        *str = toupper(*str);
        ++str;
    }
}

int punctCount(const char *str) {
    int ct = 0;
    while (*str) {
        if (ispunct(*str)) {
            ct++;
        }
        str++;
    }

    return ct;
}
int main(void) {
    char line[LIMIT];
    char * find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');
    if (find)
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", punctCount(line));

    return 0;
}