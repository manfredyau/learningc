#include <stdio.h>
void put_in_sort(double *, double *, double *);
int main(void)
{
    double a = 121231.0, b = 0.0, c = -1212;
    put_in_sort(&a, &b, &c);

    printf("after: %f, %f, %f.\n", a, b, c);

    return 0;
}

void put_in_sort(double *a, double *b, double *c)
{
    double min= 0, mid= 0, max= 0;

    if (*a < *b)
    {
        if (*a < *c)
        {
            min = *a;          // -   *a < *b && *a < *c，可以確定 *a 最小，但未知 *b 和 *c 的大小情況

            if (*b < *c)        // --- *a < *b < *c,
            {
                mid = *b;
                max = *c;
            }
            else                // --- *a < *c < *b
            {
                mid = *c;
                max = *b;
            }
        }
        else                    // --- *c < *a < *b
        {
            min = *c;
            mid = *a;
            max = *b;
        }
    }
    else                        // *a > *b
    {
        if (*c < *b)            // --- *c < *b < *a
        {
            min = *c;
            mid = *b;
            max = *a;
        }
        else                    // - *a > *b && *c > *b，可以確定 *b 最小，但還不知 *a 和 *c 的大小情況
        {
            min = *b;
            if (*a < *c)        // --- *b < *a < *c
            {
                mid = *a;
                max = *c;
            }
            else                // --- *b < *c < *a
            {
                mid = *b;
                max = *a;
            }
        }
    }

    *a = min;
    *b = mid;
    *c = max;
}