#define ISBOOL(X) _Generic(X, \
_Bool : "boolean",\
    default : "not boolean")

#include <stdio.h>

int main(void)
{
    _Bool b = 1;
    printf("%s", ISBOOL(b));

    return 0;
}