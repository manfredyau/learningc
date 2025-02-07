#include <stdio.h>

#define SQUARES 64   // 棋盤中的方格數

int main(void)
{
    const double CROP = 2E16; // 世界小麥年穀粒數
    double current, total;
    int count = 1;

    printf("square    grains       total        ");
    printf("fraction of \n");
    printf("          added        grains       ");
    printf("world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n",
           count, current, total, total / CROP
    );
    while (count < SQUARES)
    {
        count = count + 1;
        current = current * 2;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n",
               count, current, total, total / CROP
        );
    }

    return 0;
}