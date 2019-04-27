#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int my_atoi(const char *str) {
    int i;
    int result = 0;
    int bit = 1;   // 初始化為個位，即乘以 1
    // 檢查是否包含非數字字符，若找到則返回 0
    for (i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }

    // 此時，str[i - 1]即是個位上的數字
    for (int j = i - 1; j >= 0; j--, bit *= 10) {
        result += (str[j] - '0') * bit;
    }

    return result;
}
int main(void) {
    printf("%d\n", my_atoi("1994") + 1);

    return 0;
}