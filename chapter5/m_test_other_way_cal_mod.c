#include <stdio.h>
int main(void)
{
    int numberA, numberB;
    printf("Enter two numbers:");
    scanf("%d %d", &numberA, &numberB);
    printf("Mod is: %d\n", numberA - (numberA / numberB) * numberB);

    return 0;
}