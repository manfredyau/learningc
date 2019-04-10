#include <stdio.h>

void show(const double ar[], int n);

void show2(const double ar2[][3], int n);

int main(void)
{
    show((double[]) {8, 3, 9, 2}, 4);
    show2((double[2][3]) {
            {8, 3, 9},
            {5, 4, 1}
    }, 2);
}