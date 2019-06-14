#include <stdio.h>

typedef union A UA;
union A
{
    int a;
    double b;
    char c;
};
enum bool
{
    false, true, OK = 100
};

int main(void)
{
    enum bool val = OK;
    printf("%d\n", val);
    return 0;
}


