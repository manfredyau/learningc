#include <stdio.h>
#include <string.h>
char *mystrncpy(char *s1,  char *s2, int n) {
    int i = 0;
    while (i < n) {
        *s1++ = *s2++;
        i++;
    }
    return s1;
}

int main(void) {
    char s1[100];
    char s2[] = "efg";

//    mystrncpy(s1, s2, 4);
    strncpy(s1, s2, 1);
    puts(s1);

    return 0;
}