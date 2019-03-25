#include <stdio.h>
#include <stdbool.h>

// 驗證輸入的是一個整數
long get_long();
// 驗證範圍的上下限是否有效
bool bad_limits(long begin, long end,
                long low, long high);
// 計算 a~b 之間的整數平方和
double sum_squares(long a, long b);

int main(void)
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    printf("This program computes the sum of the squares of "
           "integers in a range.\nThe lower bound should not "
           "be less than -10000000 and\nthe upper bound "
           "should not be more than +10000000.\nEnter the "
           "limits (enter 0 for both limits to quit):\n"
           "lower limit: "
    );
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
        {
            printf("Please try again.\n");
        }
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers ");
            printf("from %ld to %ld is %g.\n",
                   start, stop, answer
            );
        }
        printf("Enter the limits (enter 0 for both "
               "limits to quit):\n"
        );
        printf("lower limit: ");
        start = get_long();
        printf("upper limit: ");
        stop = get_long();
    }

    printf("Done.\n");

    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')   // 只要第一個字符是無效的，那麼整行中剩餘的其他字符都將會被抛棄，注意此處使用的是 getchar()
        {
            putchar(ch);
        }
        printf(" is not an integer.\nPlease enter an "
               "integer value, such 25, -178, or 3: "
        );
    }

    return input;
}

double sum_squares(long a, long b)
{
    double total = 0;
    long i;
    for (i = a; i <= b; ++i)
    {
        total += (double) i * (double) i;
    }

    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = 0;

    if (begin > end)
    {
        printf("%ld isn't smaller than %ld.\n", begin, end);
        not_good = 1;
    }

    if (begin < low || end < low)
    {
        printf("Values must be %ld or greater.\n", low);
        not_good = 1;
    }

    if (begin > high || end > high)
    {
        printf("Values must be %ld or less.\n", high);
        not_good = 1;
    }

    return not_good;
}