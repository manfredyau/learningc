#include <stdio.h>
#include <string.h>
void rString(char *str, int n) {
    char temp;
    int i;
    for (i = 0; i < n / 2; i++) {
        temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}

int main(void) {
    char str[] = "abcdefg";
    rString(str, strlen(str));
    puts(str);

    return 0;
}