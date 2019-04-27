#include <stdio.h>
_Bool is_within(char *string, char ch) {
    while (*string != '\0' && *string != ch)
        string++;
    return *string;
}

int main(void) {
    char str[101];
    char ch;

    puts("Enter a string and a character: ");
    scanf("%s %c", str, &ch);
    while (str[0] != 'q') {
        printf("Is %c in string %s? %d\n", ch, str, is_within(str, ch));
        puts("Continue: ");
        scanf("%s %c", str, &ch);
    }

    return 0;
}

