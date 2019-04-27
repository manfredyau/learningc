#include <stdio.h>
#include <string.h>
void clear_space(char *str) {
    char *temp;
    while (*str) {
        if (*str == ' ') {
            temp = str;
            while (*temp) {
                *temp = *(temp + 1);
                temp++;
            }
        }
        str++;
    }
}

int main(void) {
    char str[] = "hello world manfred yau";
    clear_space(str);
    puts(str);

    return 0;
}