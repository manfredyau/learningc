#include <stdio.h>
#include <memory.h>

int main(void) {
//    int a, b;
//    scanf("%d   ,     %d", &a, &b);
//    printf("%d, %d\n", a, b);

    char ch;
    int count = scanf("%d", &ch);
    printf("%#x, and count is: %d\n", ch, count);

    return 0;
}