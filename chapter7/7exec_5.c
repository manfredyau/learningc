#include <stdio.h>
int main(void)
{
    char current_char;  // 當前讀取的字符
    char result_string[100];    // 將最終的結果存在這個數組裡面
    int index = 0;      //下一個要存放字符的位置
    int c_period = 0;   // 句號出現的次數
    int c_exclamation= 0;   // 感嘆號出現的次數

    while ((current_char = getchar()) != '#') {
        switch (current_char) {
            case '.':
                result_string[index] = '!';
                c_period++;
                index++;
                break;
            case '!':
                result_string[index] = '!';
                result_string[index + 1] = '!';
                c_exclamation++;
                index += 2;
                break;
            default:
                result_string[index] = current_char;
                index++;
        }
    }
    result_string[index] = '\0';
    printf("Result: \n%s\n", result_string);
    printf("Period has been changed %d times, exclamation has been changed %d times.\n", c_period, c_exclamation);

    return 0;
}