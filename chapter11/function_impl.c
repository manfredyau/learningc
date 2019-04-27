#include "functions.h"
#include "string.h"

char *s_gets(char *st, int n) {
    char *ret_val;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        st = strchr(st, '\n');
        if (st) {
            *st = '\0';
        } else {
            while (getchar() != '\n') {
                // do nothing
            }
        }
    }

    return ret_val;
}

void stsrt(char *strings[], int num) {
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++) {
        for (seek = top + 1; seek < num; seek++) {
            if (strcmp(strings[top], strings[seek]) > 0) {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
}