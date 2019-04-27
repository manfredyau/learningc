#include <stdio.h>
char *pr(char *str) {
    char *pc;

    pc = str;
    while (*pc) {
        putchar(*pc++);
    }
    do {
        putchar(*--pc);
    } while (pc - str);  // pc == str 時跳出循環

    return pc;
}

int main(void) {
    char *x = pr("Ho Ho Ho!");
    printf("\nx == \"Ho Ho Ho!\"?: %d\n", x == "Ho Ho Ho!");
    return 0;
}