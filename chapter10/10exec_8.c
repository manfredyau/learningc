#include <stdio.h>
void copy_arr(double target[], const double source[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(target + i) = *(source + i);
    }
}
int main(void) {
    double arr[7] = {1, 2, 3, 4, 5, 6, 7};
    double arr2[3];
    copy_arr(arr2, arr + 2, 3);
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); ++i) {
        printf("%.1f ", arr2[i]);
    }

    return 0;
}