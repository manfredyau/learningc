#include <stdio.h>

#define SIZE 10

void s(int arr[3][1])
{
    printf("%p\n", arr);
}

void a1(double arr[], int n);

void a2(int n, double arr[n]);

void b1(short[][SIZE], int rows);

void b2(int x, int y, short[x][y]);

void c1(long (*arr)[10][10], int rows);

void c2(int rows, int cols, int height, long arr[rows][cols][height]);

int main(void)
{
    s((int[1][1]) {9});

    c1((long[4][10][10]) {
            {1},
            {2},
            {1},
            {100}
    },10);
    return 0;
}