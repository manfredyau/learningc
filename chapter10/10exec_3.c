#include <stdio.h>
int get_max(const int *, int);

int main(void) {
    int max = get_max((int[5]) {123, 12, 1000, 0, 11}, 5);
    printf("%d\n", max);

    return 0;
}

int get_max(const int *array, int n) {
    int max = *(array + 0);
    for (int i = 0; i < n; ++i) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }

    return max;
}