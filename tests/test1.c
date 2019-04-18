#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char s1[] = "abcd";
    char s2[] = "b";
    printf("%p\n", strstr(s1, "cde"));
    printf("%p\n", s1);
    return 0;
}