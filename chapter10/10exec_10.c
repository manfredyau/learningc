#include <stdio.h>
void array_increment(const int a[], const int b[], int result[], int n) {
    for (int i = 0; i < n; ++i) {
        result[i] = a[i] + b[i];
    }
}
int main(void) {
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[4];
    array_increment(a, b, c, 4);

    for (int i = 0; i < 4; ++i) {
        printf("%d ", c[i]);
    }

    return 0;
}