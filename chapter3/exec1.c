#include <stdio.h>

int main(void) {
    char firstName[40];
    char lastName[40];
    printf("Please Enter You name: ");
    scanf("%s%s", firstName, lastName);
    printf("Your name is: %s %s\n", firstName, lastName);

    return 0;
}