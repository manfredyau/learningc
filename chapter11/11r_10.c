#include <stdio.h>
#include <string.h>
size_t my_strlen(char *string) {
    size_t count = 0;
    while (*string++) {
        count++;
    }

    return count;
}

int main(void) {
    printf("%zd\n", my_strlen("Hello"));
    return 0;
}