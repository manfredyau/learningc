#include <stdio.h>
int main(void)
{
    double money = 1000000;
    int year = 0;

    for (; money >= 0; year++)
    {
        money += money * 0.08;
        money -= 100000;
    }

    printf("%d", year);
}