#include <stdio.h>
#include <float.h>

int main(void) {
    double val1 = 1.0 / 3.0;
    float val2 = 1.0 / 3.0;

    printf("%.6f, %.6f\n", val1, val2);
    printf("%.12f, %.12f\n", val1, val2);
    printf("%.16f, %.16f\n", val1, val2);
    printf("%d, %d", FLT_DIG, DBL_DIG);
    return 0;
}