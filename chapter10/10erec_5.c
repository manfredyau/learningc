#include <stdio.h>
double distance_of_max_and_min(const double array[], int n);
double distance_of_max_and_min(const double *array, int n) {
    double min = array[0];
    double max = array[0];
    for (int i = 0; i < n; ++i) {
        if (array[i] < min) {
            min = array[i];
        }

        if (array[i] > max) {
            max = array[i];
        }
    }
    return max - min;
}

int main(void) {
    printf("%f\n", distance_of_max_and_min((double[]) {34.5, 66.2, 12.12, 45.12, 45.6}, 5));

    return 0;
}