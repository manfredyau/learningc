#include <stdio.h>
#include "functions.h"
int main(void) {
    char str[7];

    s_gets(str, 6);

    for (int i = 0; i < sizeof(str) / sizeof(str[0]); ++i) {
        printf("[%c]", str[i]);
    }

    return 0;
}