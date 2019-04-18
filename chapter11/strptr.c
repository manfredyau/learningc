#include <stdio.h>
#define SIZE  9
int main(void) {
    int ar[SIZE] = {1, 2, 3, 4};
    printf("%d\n", ar[2]);
    printf("%s, %p, %c\n", "We", "are", *"space farers");

    return 0;
}