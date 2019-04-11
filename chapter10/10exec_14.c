#include <stdio.h>
const int BIG_SIZE = 3;
const int SMALL_SIZE = 5;
void get_input(int rows, int cols, double array[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        printf("Now enter %d row's elements:\n", i + 1);
        for (int j = 0; j < cols; ++j) {
            scanf("%lf", *(array + i) + j);
        }
    }
}

double get_average_for_per_row(int length, const double array[length]) {
    double total = 0;
    for (int i = 0; i < length; ++i) {
        total += *(array + i);
    }

    return total / length;
}

double get_all_data_average(int big_length, int small_length, const double array[big_length][small_length]) {
    double total = 0;
    for (int i = 0; i < big_length; ++i) {
        total += get_average_for_per_row(small_length, array[i]);
    }

    return total / 3;
}

double get_max(int b, int s, double arr[b][s]) {
    double max = arr[0][0];
    for (int i = 0; i < b; ++i) {
        for (int j = 0; j < b; ++j) {
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
    get_input(BIG_SIZE, SMALL_SIZE, array);

    // Calculating average for per row
    for (int i = 0; i < BIG_SIZE; ++i) {
        printf("Row %d's average is: %f.\n", i + 1, get_average_for_per_row(SMALL_SIZE, array[i]));
    }

    // Average for all elements
    printf("All data elements' average is: %f.\n", get_all_data_average(BIG_SIZE, SMALL_SIZE, array));

    // Max value
    printf("The max value in this array is: %f.\n", get_max(BIG_SIZE, SMALL_SIZE, array));

    return 0;
}