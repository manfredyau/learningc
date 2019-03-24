#include <stdio.h>
const float CM_PER_FOOT = 30.48;
const float CM_PER_INCH = 2.54;
int main(void)
{
    float height;
    printf("Enter your height for cm:\n");
    scanf("%f", &height);
    while (height > 0)
    {
        printf("%.1f cm = %d feet, %.1f inches\n", height, (int) (height / CM_PER_FOOT),
               (height - (int) (height / CM_PER_FOOT) * CM_PER_FOOT) / CM_PER_INCH);
        printf("----------------------------------------------\n");
        printf("You can enter a number again, and <=0 to exit\n");
        scanf("%f", &height);
    }

    return 0;
}