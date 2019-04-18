#include "functions.h"

char *s_gets(char *st, int n) {
    char * ret_val;
    int count = 0;
    ret_val = fgets(st, n, stdin);
    if (st) {
        while (st[count] != '\n' && st[count] != '\0') {
            count++;
        }

        if (st[count] = '\n') {
            st[count] = '\0';
        } else {
            while (getchar() != '\n') {

            }
        }
    }

    return ret_val;
}