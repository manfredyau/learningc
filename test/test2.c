#include <stdio.h>
int main(void) {
    char str[10];
    char ch;
    scanf("%11s", str);
    printf("%s\n", str);
    putchar('\n');
    while ((ch = getchar()) != '\n') {
        putchar(ch);
    }
    return 0;
}