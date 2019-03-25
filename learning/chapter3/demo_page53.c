//
// Created by Manfr on 2019/3/16.
//
#include <stdio.h>
int main(void)
{
    char ch = '\x00000000000000065';
    long l = 0x11223344L;
     int i = -1234;
    printf("%c\n", ch);
    printf("%,%zd\n", i, sizeof(long));

    return 0;
}
