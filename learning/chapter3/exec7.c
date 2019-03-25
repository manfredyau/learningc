#include <stdio.h>
int main(void)
{
    double h_inch;
    printf("Enter your height in inch: ");
    scanf("%lf", &h_inch);
    printf("Your height in cm is %f.\n", h_inch * 2.54);

    return 0;
}