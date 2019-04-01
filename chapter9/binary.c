#include <stdio.h>
#include <stdbool.h>
void to_binary(unsigned long n);
int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;   // 餘數只可能是 0 或 1
    if (n >= 2)
    {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');   // 這個反而是“先進後執行”，下面的遞歸先執行完才會

    return;
}