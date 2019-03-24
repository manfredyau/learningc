#include <stdio.h>
const int COUNT = 10;
int main(void)
{
    int num, limit;
    printf("Enter a number please: ");
    scanf("%d", &num);
    limit = num + 10;
    while (num <= limit) {
        printf("%d ", num++);
    }
    printf("\n");

    return 0;
}