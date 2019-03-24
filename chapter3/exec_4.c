#include <stdio.h>
int main(void)
{
    double height;
    printf("Please enter your height in meter:\n");
    scanf("%lf", &height);
    printf("Your height is %.0f cm.", height * 100);

    return 0;
}