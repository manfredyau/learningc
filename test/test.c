#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "a.h"

void c(int []);

void a(int ar[][4])
{
    printf("%d\n", ar[0][3]);
    printf("function\n");
}

void b(int a[][2])
{

}

void d(int a, int b, int arr[a][b])
{

}

int main(void)
{
    int arr[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
    };
    d(10, 10, arr);
    return 0;
}
