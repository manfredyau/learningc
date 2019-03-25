#include "stdio.h"
void print_char(char ch);
int main(void)
{
    int count = 0;
    int ch;

    while ((ch = getchar()) != EOF)
    {
        print_char(ch);
        ++count;
        if (count == 10 || ch == '\n')
        {
            putchar('\n');
            count = 0;
        }
    }
}

void print_char(char ch)
{
    // 如果 ch 是換行符的話這個函數就什麼都不用幹
    if (ch == '\n')
    {
        return;
    }

    // 如果 ch 是一個非打印字符的話
    if (ch < 65)
    {
        printf("[^%c-", 64 + ch);
    }
    else
    {
        printf("[%c-", ch);
    }

    // 接著再打印字符相應的 十進位 ascii 碼
    printf("%d]", ch);
}