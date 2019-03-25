#include <stdio.h>
#include <string.h>

int main(void) {
    char string[256];
    int count = 0;
    printf("Enter a string in a line: ");
    while (count < 256) {
        scanf("%c", &string[count]);
        count++;

    }

    count = 255;
    while (count >= 0) {
        printf("%c ", string[count--]);
    }

    return 0;
}