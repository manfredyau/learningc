#include <stdio.h>
const int SIZE = 256;
int main(void)
{
    char string[SIZE];
    int count = 0;
    printf("Please enter a string in a line: ");

//    while (count < SIZE &&            // 沒有超過一行的大小(255個字符)
//           scanf("%c", &string[count]) == 1 &&  // 並且確實讀到了一個字符
//           string[count++] != '\n')   // 讀到換行符就該停止循環了
//        ;
    for (scanf("%c", &string[count]); string[count] != '\n'; ) {
        scanf("%c", &string[++count]);
    }

    for (int i = count - 1; i >= 0; --i)
    {
        printf("%c ", string[i]);
    }

    return 0;

}