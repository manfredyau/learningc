#include <stdio.h>
int max_in_three_num(int a, int b, int c);

int main(void)
{

}

int max_in_three_num(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}