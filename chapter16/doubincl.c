#include <stdio.h>
#include "names.h"
#include "names.h"

int main(void)
{
    names winner = {"Less", "Ismoor"};
    printf("The winner is %s %s.\n", winner.first, winner.last);
#if defined(NAMES_H_)
    printf("do.");
#endif
    return 0;
}

