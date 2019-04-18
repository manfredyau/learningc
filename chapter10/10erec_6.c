#include <stdio.h>
void reserve_array(double array[], int n) {
    double temp;
    int i;
    for (i = 0; i < n / 2; i++) {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

int main(void) {
    double arr[] = {1.2, 3.4, 5.6, 7.8, 9.10, 11.12};
    reserve_array(arr, sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        printf("%.3f ", arr[i]);
    }

    return 0;
}