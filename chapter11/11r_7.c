#include <stdio.h>
#include <string.h>
#define M1 "How are ya, sweetie? "
char M2[40] = "Beat the clock.";
char *M3 = "chat";
int main(void) {
    char words[80];
    printf(M1);     // How are ya, sweetie?  (不換行)
    puts(M1);       // How are ya, sweetie?
    puts(M2);       // Beat the clock.
    puts(M2 + 1);   // eat the clock.
    strcpy(words, M2);  // words 變成 Beat the clock.
    strcat(words, " Win a toy.");  // word 變成 Beat the clock. Win a toy.
    puts(words);    // Beat the clock. Win a toy.
    words[4] = '\0';    // words 變成 Beat
    puts(words);    // Beat
    while (*M3)
        puts(M3++); // 打印 chat,但指針最後指向了 空字符
    puts(--M3);     // "t"
    puts(--M3);     // "at
    M3 = M1;
    puts(M3);       // How are ya, sweetie?

    return 0;
}