#include <stdio.h>

#define L_per_gallon 3.785
#define km_per_mile 1.609

int main(void) {
    float mileage;
    float oil_consumption;
    printf("Enter mileage and oil consumption:\n");
    scanf("%f %f", &mileage, &oil_consumption);
    printf("%.1f mileage/gallon.\n", mileage / oil_consumption);

    printf("Equals %.1f L/100km\n", oil_consumption * L_per_gallon / (mileage * km_per_mile) * 100);
}