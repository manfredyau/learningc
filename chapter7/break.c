#include <stdio.h>
int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1) {
        printf("Length = %.2f:\n", length);
        printf("Enter it's width:\n");
        if (scanf("%f", &width) != 1) {
            break;
        }
        printf("Width = %.2f:\n", width);
        printf("Area = %.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

    return 0;
}