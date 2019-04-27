#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"
#define ANSWER "Grant"
#define SIZE 40
void to_upper(char *string) {
    while (*string != '\0') {
        *string = toupper(*string);
        string++;
    }
}
int main(void) {
    char try[SIZE];
    int i;
    puts("Who is buried in Grant's tomb");
    s_gets(try, SIZE);

    // convert to upper for ANSWER
    char CPY_ANSWER[sizeof(ANSWER) / sizeof(ANSWER[0])];
    for (i = 0; i < sizeof(CPY_ANSWER) / sizeof(CPY_ANSWER[0]); i++) {
        CPY_ANSWER[i] = ANSWER[i];
    }
    to_upper(CPY_ANSWER);

    to_upper(try);
    while (strcmp(try, CPY_ANSWER)) {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
        to_upper(try);
    }
    puts("That's right!");

    return 0;
}
