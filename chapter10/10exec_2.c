#include <stdio.h>
void copy_arr(double[], const double[], int);
void copy_ptr(double *, const double *, int);
void copy_last_limit(double[], const double[], const double *);
int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_last_limit(target3, source, source + 4);
    printf("Now, target1's content are: \n");
    for (int i = 0; i < 5; ++i) {
        printf("%.1f ", target1[i]);
    }

    printf("\nNow target2's content are: \n");
    for (int i = 0; i < 5; ++i) {
        printf("%.1f ", target2[i]);
    }

    printf("\nNow target3's content are: \n");
    for (int i = 0; i < 5; ++i) {
        printf("%.1f ", target3[i]);
    }
    return 0;
}

void copy_arr(double target[], const double source[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(target + i) = *(source + i);
    }
}

void copy_ptr(double *target, const double *source, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(target + i) = *source++;
    }
}

void copy_last_limit(double target[], const double source[], const double *last_element) {
    int i = 0;
    while (source <= last_element) {
        target[i++] = *source++;
    }
}

