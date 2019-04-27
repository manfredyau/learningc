#include <stdio.h>
char *my_strchr(char *string, char chr) {
    const char *orig = string;
    while (*string != chr && *string != EOF && *string != '\0') {
        string++;
    }
    if (*string == EOF || *string == '\0') {
        return NULL;
    } else {
        return string;
    }
}

int main(void) {
    char str[10];
    char ch;
    char *ptr;
    puts("Enter a string and a character: ");
    scanf("%s %c", str, &ch);
    while (str[0] != '\0') {
        ptr = my_strchr(str, ch);
        if (ptr) {
            putchar(*ptr);
        } else {
            puts("There is not the character.");
        }
        scanf("%s %c", str, &ch);
    }
    puts("Done.");

    return 0;
}