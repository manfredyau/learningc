#include <stdio.h>
void print2d(int rows, int cols, double array[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%.1f ", array[i][j]);
        }
        putchar('\n');
    }
}

void copy_2d(int rows, int cols, double target[rows][cols], double source[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            target[i][j] = source[i][j];
        }
    }
}

int main(void) {
    double array[][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10}
    };
    double array2[2][5];

    copy_2d(2, 5, array2, array);

    print2d(2, 5, array2);

    return 0;
}