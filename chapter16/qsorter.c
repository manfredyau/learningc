#include <stdlib.h>
#include <stdio.h>
#define NUM 40

void fillarray(double ar[], int n);

void showarray(const double ar[], int n);

int mycomp(const void *p1, const void *p2);

int main(void)
{
    double vals[NUM];
    fillarray(vals, NUM);
    puts("Random list:");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(double), mycomp);   // After done this, sort has been finished.

    puts("\nSorted list:");
    showarray(vals, NUM);
    return 0;
}

void fillarray(double ar[], int n){
    int index;
    for (index = 0; index < n; index++)
        ar[index] = (double) rand() / ((double) rand() + 0.1);
}

void showarray(const double ar[], int n)
{
    int index;
    for (index = 0; index < n; index++) {
        printf("%9.4f ", ar[index]);
        if (index % 6 == 5)
            putchar('\n');
    }
    if (index % 6 != 0)
        putchar('\n');
}

int mycomp(const void * p1, const void * p2)
{
    const double * a1 = p1;
    const double * a2 = p2;

    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}