#include <stdio.h>
#define DAYS_PER_WEEK 7
int main(void)
{
    int days, weeks, left;
    printf("Enter a day please: ");
    scanf("%d", &days);
    weeks = days / DAYS_PER_WEEK;
    left = days % DAYS_PER_WEEK;
    printf("%d days are %d weeks, %d days.\n", days, weeks, left);

    return 0;
}