#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch != '\n')
        {
            printf("Step 1\n");

            if (ch != 'c')
            {
                if (ch != 'b')
                {
                    if (ch != 'h')
                    {
                        printf("Step 2\n");
                    }
                    printf("Step 3\n");
                }
                else
                {
                    break;
                }
            }
        }
    }
    printf("Done!\n");

    return 0;
}