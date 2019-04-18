#include <stdio.h>
#define ROWS 2
#define COLS 4
void copy_arr(double target[], const double source[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(target + i) = *(source + i);
    }
}
int main(void) {
    double array[ROWS][COLS] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8}
    };

    double array2[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        copy_arr(array2[i], array[i], COLS);
        for (int j = 0; j < COLS; ++j) {
            printf("%.1f ", array2[i][j]);
        }
        putchar('\n');
    }

    return 0;
}