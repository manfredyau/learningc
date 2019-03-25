#include <stdio.h>
int main(void) {
    double dbls1[8], dbls2[8];
    printf("Enter 8 numbers: ");
    for (int i = 0; i < 8; ++i) {
        scanf("%lf", &dbls1[i]);
    }

    dbls2[0] = dbls1[0];
    for (int j = 1; j < 8; ++j) {
        dbls2[j] = dbls2[j - 1] + dbls1[j];
    }

    for (int k = 0; k < 8; ++k) {
        printf("%5.2f ", dbls1[k]);
    }
    printf("\n");

    for (int l = 0; l < 8; ++l) {
        printf("%5.2f ", dbls2[l]);
    }
    printf("\n");


    return 0;
}