#include <stdio.h>
const int INIT_COUNT = 5;
const int DUNBAR = 150;
int main(void)
{
    int friend_count = INIT_COUNT;
    int weeks = 1;
    while (friend_count <= DUNBAR)
    {
        friend_count = (friend_count - weeks) * 2;
        printf("After %d weeks, there are %d friends.\n", weeks++, friend_count);
    }

    return 0;
}