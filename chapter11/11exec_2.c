#include <stdio.h>
#include <ctype.h>
#include "limits.h"
#include <stdbool.h>
#define SIZE 11
char *read(char *arr, int n) {
    int count = 0;
    char ch;
    while (count < n) {
        ch = getchar();
        if (ch == EOF) {
            return NULL;
        } else if (isspace(ch)) {
            break;
        } else {
            arr[count++] = ch;
        }
    }

    arr[count] = '\0';
    return arr;
}

int main(void) {
    puts("Enter a string: ");
    char str[SIZE];
    read(str, SIZE - 1);
    puts(str);
    return 0;
}