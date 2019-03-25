#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    printf("%e\n", FLT_EPSILON);
    printf("%E\n", DBL_EPSILON);

    return 0;
}