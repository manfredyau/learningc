#include <stdio.h>
int main(void)
{
    char current;
    char result[100];
    int index_result = 0;      // 指示下一個字符應該放在 result 中的哪個位置
    int c_period = 0;              // 句號出現且替換的次數
    int c_ex = 0;                  // 感嘆號出現且替換的次數

    while ((current = getchar()) != '#')
    {
        if (current == '.')
        {
            c_period++;         // 句號出現次數加1
            result[index_result] = '!';

            index_result = index_result + 1;
        }
        else if (current == '!')
        {
            c_ex++;             // 感嘆號出現次數加1
            result[index_result] = '!';
            result[index_result + 1] = '!';

            index_result = index_result + 2;    // 因為使用了兩個 ! 替換一個 !，所以下一個字符放置的位置要加2
        }
        else
        {                  // 如果讀到的字符既非句號也非感嘆號
            result[index_result] = current;
            index_result = index_result + 1;
        }
    }

    result[index_result] = '\0';
    
    printf("Result: \n"
           "%s\n", result
    );
    printf("Period has been changed %d times, exclamation has been changed %d times.\n", c_period, c_ex);

    return 0;
}