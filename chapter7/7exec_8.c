#include <stdio.h>
#define SAL_PER_H1 8.75
#define SAL_PER_H2 9.33
#define SAL_PER_H3 10.00
#define SAL_PER_H4 11.20
#define OVERTIME_THRESHOLD 40
#define RATE1  0.15
#define RATE2  0.20
#define RATE3  0.25
#define BASE_TAX1 45.00
#define BASE_TAX2 (BASE_TAX1 + 30)
#define BREAK1 300.00
#define BREAK2 450.00
int main(void)
{
    int hours;
    int option;
    double h_salary = 0;
    double tax = 0;
    double salary = 0;
    double income = 0;
    _Bool f_want_exit = 0;      // 配合 case 5: 決定是否跳出循環
    do
    {

        printf("Enter the number corresponding to the desired pay rate or action:\n"
               "1) $8.75/hr                  2) $9.33/hr\n"
               "3) $10.00/hr                 4) $11.20/hr\n"
               "5) quit\n"
        );
        scanf("%d", &option);
        switch (option)
        {
            case 1:
                h_salary = 8.75;
                break;
            case 2:
                h_salary = 9.33;
                break;
            case 3:
                h_salary = 10.00;
                break;
            case 4:
                h_salary = 11.20;
                break;
            case 5:
                f_want_exit = 1;    // 更改標誌的值，使得在執行完當前 switch 語句後可以跳出循環
                break;
            default:
                continue;
        }

        if (f_want_exit)
        {  //檢測 f_want_exit 的值，為1時即跳出循環
            break;
        }

        // 讓用戶輸入工作的小時數
        printf("Enter your working hours:\n");
        scanf("%d", &hours);
        if (hours <= OVERTIME_THRESHOLD)    // 如果工作的小時數沒有達到加班工作時間的閾值
        {
            salary = hours * h_salary;
        }
        else                                // 加班了
        {
            salary = (OVERTIME_THRESHOLD * h_salary) +    // 剛好達到加班工作時間閾值時的工資
                     (hours - OVERTIME_THRESHOLD) * h_salary * 1.5;     // 加班所獲得的額外工資
        }

        // 計算需要扣去的稅金
        if (salary <= BREAK1)
        {
            tax = salary * RATE1;
        }
        else if (salary <= BREAK2)
        {
            tax = BASE_TAX1 + (salary - BREAK1) * RATE2;
        }
        else
        {
            tax = BASE_TAX2 + (salary - BREAK2) * RATE3;
        }

        // 計算剩下的收入
        income = salary - tax;
        printf("Salary is %.2f, tax is %.2f and income is %.2f.\n"
               "----------------------------------------------\n",
               salary, tax, income);
    } while (1);


    return 0;
}