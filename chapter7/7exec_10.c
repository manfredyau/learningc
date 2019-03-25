#include <stdio.h>
#include <stdbool.h>
#define SINGLE_THRESHOLD 17850.0
#define HEAD_THRESHOLD 23900.0
#define MARRIED_THRESHOLD 29750.0
#define DIVORCED_THRESHOLD 14875.0
#define INNER_RATE 0.15
#define OUTER_RATE 0.28
#define SINGLE 1
#define HEAD 2
#define MARRIED 3
#define DIVORCED 4
int main(void)
{
    int category;
    double threshold;
    double income;
    double tax = 0;
    while (1)
    {
        printf("Select your category:\n"
               "1) Single    2) Head    3) Married    4)Divorced\n"
               "0) Quit\n"
        );
        scanf("%d", &category);

        // 當用戶輸入0時就跳出循環
        if (category == 0)
        {
            break;
        }

        // 根據身份的類別決定15%和28%稅率間的閾值是多少
        switch (category)
        {
            case SINGLE:
                threshold = SINGLE_THRESHOLD;
                break;
            case HEAD:
                threshold = HEAD_THRESHOLD;
                break;
            case MARRIED:
                threshold = MARRIED_THRESHOLD;
                break;
            case DIVORCED:
                threshold = DIVORCED_THRESHOLD;
                break;
            default:
                continue;
        }

        // 提示用戶輸入收入
        printf("Enter your income:\n");
        scanf("%lf", &income);

        if (income <= threshold)
        {
            tax = income * INNER_RATE;
        }
        else
        {
            tax = (threshold * INNER_RATE) +
                  (income - threshold) * OUTER_RATE;
        }

        printf("Tax is: %.2f\n", tax);
    }

    return 0;
}