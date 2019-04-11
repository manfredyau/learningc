#include <stdio.h>
int get_max_index(const double *, int);
int main(void) {
    int max_value_index = get_max_index((double[]) {12.3, 12399999.5, 129.45, 131313.9}, 4);

    printf("%d\n", max_value_index);

    return 0;
}

int get_max_index(const double *array, int n) {
    int max_value_index = 0;
    double max_value = array[0];
    for (int i = 0; i < n; ++i) {
        if (array[i] > max_value) {
            max_value = array[i];
            max_value_index = i;
        }
    }
    return max_value_index;
}