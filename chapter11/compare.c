#include <stdio.h>
#include <string.h>
#include "functions.h"
#define ANSWER "Grant"
#define SIZE 40
int main(void) {
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER)) {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}