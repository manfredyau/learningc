#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char s1[20] = "abcde";
//    for (int i = 0; i < 5; ++i) {
//        s1[i] = 'A';
//    }
//    s1[5] = '\0';
    char s2[] = "NICE";
    strncpy(s1, s2, 4);

    for (int j = 0; s1[j] != '\0'; ++j) {
        printf("%c", s1[j]);
    }
    return 0;
}