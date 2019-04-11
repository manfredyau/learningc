#include <stdio.h>
const int BIG_SIZE = 3;
const int SMALL_SIZE = 5;
void get_input(double (*array)[SMALL_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Now enter %d row's elements:\n", i + 1);
        for (int j = 0; j < SMALL_SIZE; ++j) {
            scanf("%lf", *(array + i) + j);
        }
    }
}

double get_average_for_per_row(const double *array, int n) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += *(array + i);
    }

    return total / n;
}

double get_all_data_average(const double (*array)[SMALL_SIZE], int n) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += get_average_for_per_row(*(array + i), SMALL_SIZE);
    }

    return total / 3;
}

double get_max(double arr[][5]) {
    double max = arr[0][0];
    for (int i = 0; i < BIG_SIZE; ++i) {
        for (int j = 0; j < SMALL_SIZE; ++j) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    return max;
}
int main(void) {
    printf("Enter 15 numbers for 3 5-element array:\n");
    double array[BIG_SIZE][SMALL_SIZE];
    get_input(array, BIG_SIZE);

    // Calculating average for per row
    for (int i = 0; i < BIG_SIZE; ++i) {
        printf("Row %d's average is: %f.\n", i + 1, get_average_for_per_row(array[i], SMALL_SIZE));
    }

    // Average for all elements
    printf("All data elements' average is: %f.\n", get_all_data_average(array, BIG_SIZE));

    // Max value
    printf("The max value in this array is: %f.\n", get_max(array));

    return 0;
}