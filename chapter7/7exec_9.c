#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    long long int num;
    // 最小的素數為2，因此從2開始打印素數
    long long int currentNum = 2;
    bool isPrime;

    // 讓用戶輸入一個正整數
    do
    {
        printf("Enter a positive integer: ");

        // 如果輸入的不是正整數，就要重新輸入
        scanf("%lld", &num);
    } while (num <= 0);

    //打印小於或等於 num 以內的所有素數
    while (currentNum <= num)
    {
        isPrime = true;    // 重置標識值
        for (int divisor = 2; divisor * divisor <= currentNum; divisor++)
        {
            if (currentNum % divisor == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            printf("%lld, ", currentNum);
        }

        // 更新下一個要檢測的素數
        currentNum++;
    }

    // 刪除多餘的逗號和空格
    printf("\b\b");
    return 0;
}