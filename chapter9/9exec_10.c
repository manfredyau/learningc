#include <stdio.h>
void to_base_n(int, int);
int main(void)
{
    int number, scale;
    printf("Enter two numbers, as a decimal and scale: ");
    while ((scanf("%d %d", &number, &scale)) == 2)
    {
        if (scale < 2 || scale > 10)
        {
            printf("The scale can only be assigned between 2 and 10.\n");
            while (getchar() != '\n')
            {
                ;
            }
            continue;
        }
        to_base_n(number, scale);
        putchar('\n');

        while (getchar() != '\n')
        {
            ;
        }

        printf("Continue enter: ");
    }

    return 0;
}

void to_base_n(int number, int scale)
{
    int r;
    r = number % scale;
    if (number >= scale)
    {
        to_base_n(number / scale, scale);
    }

    putchar('0' + r);
}