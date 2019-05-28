#include <stdio.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina \
                tive. - Oscar Wilde"

#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"
void f(void);
int main(void)
{
#define A 1
    int x = TWO;
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");
    printf("%d\n", A);

    printf("function's A\n");
    f();
    return 0;
}

void f(){
    printf("%d", A);
}