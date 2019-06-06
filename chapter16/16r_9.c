#include <stdio.h>
#define PR_DATE

int main(void)
{
#ifdef PR_DATE
    printf(__DATE__);
#endif

    return 0;
}