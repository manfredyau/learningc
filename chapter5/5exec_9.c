#include <stdio.h>

void Temperatures(double fahrenheit);

int main(void)
{
    double fahrenheit, celsius, Kelvin;
    char flag;
    printf("Enter a temperature in fahrenheit: ");
//    scanf("%lf", &fahrenheit);
    while (scanf("%lf", &fahrenheit) == 1) // fahrenhei != '\0'
    {
        Temperatures(fahrenheit);
        printf("Enter a value to continue, or a non-number to quit: ");
    }

    printf("Done!\n");

    return 0;
}

void Temperatures(double fahrenheit)
{
    const double FIVE_NINE = 5.0 / 9.0;
    const double ABSOLUTE_ZERO_POSITIVE = 273.16;

    double celsius = FIVE_NINE * (fahrenheit - 32.0);
    double kelvin = celsius + ABSOLUTE_ZERO_POSITIVE;
    printf("%.2f fahrenheit is %.2f celsius, or %.2f kelvin.\n", fahrenheit, celsius, kelvin);
}
