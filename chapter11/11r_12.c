#include <stdio.h>
#include <string.h>
char *first_space(char *string) {
    while (*string != ' ' && *string != '\0') {
        string++;
    }
    if (*string == ' ') {
        return string;
    } else {
        return NULL;
    }
}