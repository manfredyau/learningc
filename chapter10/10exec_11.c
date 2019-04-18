#include <stdio.h>
#define ROWS 3
#define COLS 5
void double_value(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = 2 * arr[i][j];
        }
    }
}

void print_2d(int arr[][COLS], int rows) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < COLS; ++j) {
            printf("%3d", arr[i][j]);
        }
        putchar('\n');
    }
}
int main(void) {
    int arr[ROWS][COLS] = {
            {1,  2,  3,  4,  5},
            {6,  7,  8,  9,  10},
            {11, 12, 13, 14, 15}
    };
    double_value(arr, sizeof(arr) / sizeof(arr[0]));
    print_2d(arr, ROWS);

    return 0;
}