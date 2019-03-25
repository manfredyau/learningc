#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    bool inword = false;
    int ch;
    int c_words = 0;
    int c_letters = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))        // 如果讀取到了一個字母
        {
            c_letters++;        // 字母數自增1
            if (!inword)        // 如果是剛進入單詞中
            {
                inword = true;     // 標識進入了一個單詞當中
                c_words++;        // 單詞數自增1
            }
        }

        if ((isspace(ch) || ispunct(ch)) && inword)
        {
            printf("最近的一個單詞有 %d 個字母.\n", c_letters);
            inword = false;     // 標記離開了單詞
            c_letters = 0;      // 字母的統記要歸0
        }

    }

    printf("Total %d words.\n", c_words);
    return 0;
}