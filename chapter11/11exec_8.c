#include <stdio.h>
#include <string.h>
#define LEN
char *string_in(const char *s1, const char *s2) {
    // 記錄下 s2 的長度(不含空字符)
    const int l2 = strlen(s2);

    // 初始代不匹配情況為 1，為 0 時則意味著匹配了，結束檢查
    _Bool nomatch = 1;

    // 剩餘的嘗試次數
    int tries = strlen(s1) + 1 - strlen(s2);
    while ((nomatch = strncmp(s1, s2, l2)) && tries--) {
        s1++;
    }

    if (nomatch)
        return NULL;
    else
        return (char *) s1;
}

int main(void) {
    const char ORIG[LEN] = "transportation";
    char *find;

    puts(ORIG);
    find = string_in(ORIG, "port");
    if (find)
        puts(find);
    else
        puts("Not found");
    find = string_in(ORIG, "part");
    if (find)
        puts(find);
    else
        puts("Not found");

    return 0;
}
