#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main(void) {
    int i;
    char c;
    scanf("%d", &i);

    while ((c = getchar()) != '\n')
        printf("%c ", c);

    return 0;
}

