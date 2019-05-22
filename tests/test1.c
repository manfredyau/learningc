#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
int abc = 9;
int main(void)
{
    FILE *fp;
    fp = fopen("file.txt", "r+");

    putchar(getc(fp));
    putchar(getc(fp));
    ungetc('H', fp);
//    fseek(fp, 0L, SEEK_SET);
//    putchar(getc(fp));
    putchar(getc(fp));
    return 0;
}

