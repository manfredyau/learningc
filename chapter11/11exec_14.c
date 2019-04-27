#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int arg1, char *arg2[]) {
    if (arg1 < 3) {
        puts("Error, should be 2 parameters.\n");
        return 0;
    }
    char *end_ptr;
    double base = strtod(arg2[1], &end_ptr);
    printf("Stopped at %s.\n", *end_ptr ? end_ptr : "NULL");
    int exponent = strtol(arg2[2], &end_ptr, 10);
    printf("Stopped at %s.\n", *end_ptr ? end_ptr : "NULL");
    printf("%.2f\n", pow(base, exponent));

    return 0;
}