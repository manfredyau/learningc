#include <stdio.h>
#include <string.h>
int main(void) {
    char firstName[40];
    char lastName[40];
    printf("Please enter your name: ");
    scanf("%s %s", firstName, lastName);
    // a
    printf("\"%s %s\"\n", firstName, lastName);

    // b
    printf("\"%s %20s\"\n", firstName, lastName);

    // c
    printf("\"%s %-20s\"\n", firstName, lastName);

    // d
    printf("%*s\n", strlen(firstName) + 3, firstName);

    return 0;
}