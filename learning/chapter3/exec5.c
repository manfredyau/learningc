#include<stdio.h>

int main(void) {
    short age;
    printf("Enter your age: ");
    scanf("%hd", &age);
    printf("\nYou have live for %d seconds", (int) (3.156E7 * age));

    return 0;
}