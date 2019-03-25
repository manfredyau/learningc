#include <stdio.h>
#include <math.h>
int main(void)
{
    int up_limit, down_limit;
    printf("Enter two numbers as lower limit and upper limit: ");
    scanf("%d %d", &down_limit, &up_limit);

    while (up_limit > down_limit) {
        int sum = 0;
        for (int i = down_limit; i <= up_limit; ++i)
        {
            sum += pow(i, 2);
        }
        printf("The sum is: %i\n"
               "Enter two value to continue: ", sum);
        scanf("%d %d", &down_limit, &up_limit);
    }

    return 0;
}