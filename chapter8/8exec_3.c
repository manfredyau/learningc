#include <stdio.h>
#include <ctype.h>
int main(void)
{
    // 記錄大寫字母的個數
    int c_upper = 0;

    // 記錄小寫字母的個數
    int c_lower = 0;

    // 保存當前讀取到的字符
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            c_lower++;
        }
        else if (isupper(ch))
        {
            c_upper++;
        }
    }
    printf("EOF is: %d\n", ch);

    printf("There are %d upper-case letters and %d lower-case letters.\n", c_upper, c_lower);

    return 0;
}