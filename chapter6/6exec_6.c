#include <stdio.h>
int quare(int root);
int cube(int root);
int main(void)
{
    int row, shift;
    printf("Enter a start number and shift: ");
    scanf("%d %d", &row, &shift);

    for (int i = row; i < row + shift; ++i)
    {
        printf("%d %d %d\n", i, quare(i), cube(i));
    }

    return 0;
}

int quare(int root)
{
    return root * root;
}

int cube(int root)
{
    return root * root * root;
}