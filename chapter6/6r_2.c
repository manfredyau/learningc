#include <stdio.h>
int main(void)
{
    double value;
    for (value = 36; value > 0; value /= 2)
        printf("%a, ", value);

//    printf("%d\n", value);
    printf("\n");
    printf("%a\n", value);
}
