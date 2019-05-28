#include <stdio.h>
#include <math.h>
#define PR(X ,...) printf("Message " #X ": " __VA_ARGS__)
#define PR2(...) printf(__VA_ARGS__)
int main(void)
{
    PR2("A%s,%s", "B", "C");
    return 0;
}