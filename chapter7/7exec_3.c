#include <stdio.h>
int main(void)
{
    int c_even = 0;
    int sum_even = 0;

    int c_odd = 0;
    int sum_odd = 0;

    int num;

    printf("Enter one or more numbers: ");
    scanf("%d", &num);
    while (num != 0) {
        if (num % 2 != 0) {     // 奇數
            c_odd++;
            sum_odd += num;
        }
        else {                  // 偶數
            c_even++;
            sum_even += num;
        }

        scanf("%d", &num);
    }

    printf("You have input %d odd numbers, average is %.1f.\n"
           "And %d even numbers, average is %.1f.\n",
           c_odd, (float) sum_odd / c_odd,
           c_even, (float) sum_even / c_even
    );

    return 0;
}