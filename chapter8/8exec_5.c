#include <stdio.h>
int main(void)
{
    int guess = 50;
    int low = 0, high = 100;
    int ch;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right.");
    printf("Uh...is your number %d?\n"
           "Too big(b) or small(s)\n", guess
    );
    while ((ch = getchar()) != 'y')
    {
        if (ch == 's')
        {
            low = guess;
            guess = guess + (high - guess) / 2;
        }
        else if (ch == 'b')
        {
            high = guess;
            guess = guess - (guess - low) / 2;
        }
        else
        {
            if (ch != '\n')
            {
                printf("You can only input: y, s and b: ");
            }
            continue;
        }

        printf("Uh...is your number %d?\n"
               "Too big(b) or small(s)\n", guess
        );
    }

    printf("Thank you!\n");
    return 0;
}