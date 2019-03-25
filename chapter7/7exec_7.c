#include <stdio.h>
#define BASE_SALARY_PER_HOUR 10.00
#define OVERTIME_SALARY_PER_HOUR (BASE_SALARY_PER_HOUR * 1.5)
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
    double tax = 0;
    double salary = 0;
    double income = 0;
    printf("Enter your working hours:\n");
    scanf("%d", &hours);

    // 計算總薪資
    if (hours <= 40)
    {
        salary = hours * BASE_SALARY_PER_HOUR;
    }
    else
    {
        salary = OVERTIME_THRESHOLD * BASE_SALARY_PER_HOUR +    // 剛好工作40個小時的薪資
                 (hours - OVERTIME_THRESHOLD) * OVERTIME_SALARY_PER_HOUR;     // 40個小時以外獲得的薪資
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

    printf("Salary is %.2f, tax is %.2f and income is %.2f.\n", salary, tax, income);

    return 0;
}