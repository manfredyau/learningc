#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
    char c;         // 當前讀入的字符
    char prev;      // 上一個字符
    long n_chars = 0L;  // 字符數
    int n_lines = 0;// 行數
    int n_words = 0;// 單詞數
    int p_lines = 0;// 不完整的行數
    bool inword = false;

    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';    // 用於識別完整的行
    while ((c = getchar()) != STOP)
    {
        n_chars++;  // 字符總數加1
        if (c == '\n')
        {
            n_lines++;
        }
        if (!isspace(c) && !inword)
        {  // 透過設定 inword，可以實現在讀取“一個單詞”的過程中只增加總字符數而不再重複增加“單詞數”
            inword = true;
            n_words++;              // 單詞數加 1，對於一個單詞，只會執行一次
        }
        if (isspace(c) && inword) {
            inword = false;         // 到達一個單詞的末尾了
        }
        prev = c;   // 保存起來
    }

    if (prev != '\n') {
        p_lines = 1;
    }

    printf("character = %ld, words = %d, lines = %d, ",
           n_chars, n_words, n_lines
    );
    printf("partial lines = %d\n", p_lines);

    return 0;
}