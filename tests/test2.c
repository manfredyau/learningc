#include "functions.h"
#include <ctype.h>
#include <tgmath.h>

#define GET_MIN(a, b) (a < b)?a:b
#define SIX = 6

inline double square(double x)
{
    return x * x;

}

//double square(double x)
//{
//    return x * x;
//}
void _Noreturn bye(void)
{
    puts("Bye");
}

//int main(void)
//{
//    printf("%d\n", GET_MIN(9,6 + 1));
//    return 0;
//}
void doit(void)
{
    puts("doit.");
}