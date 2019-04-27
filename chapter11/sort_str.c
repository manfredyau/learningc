#include <stdio.h>
#include <string.h>
#include "functions.h"
#define SIZE 81
#define LIM 20
#define HALT ""
int main(void) {
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct = 0;
    int k;

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    puts("To stop, press the Enter key at a line's start.");
    while (ct < LIM
           && s_gets(input[ct], SIZE) != NULL
           && input[ct][0] != '\0') {
        ptstr[ct] = input[ct];
        ct++;
    }

    stsrt(ptstr, ct);
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++) {
        puts(ptstr[k]);
    }
}