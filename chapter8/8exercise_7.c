#include <stdio.h>
char choice;
int main(void)
{
    printf("Enter the number corresponding to the desired ay rate or action:\n");
    printf("1) $8.75/hr\t\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t\t4) $11.21/hr\n");
    printf("q) quit\n");

    while ((choice = getchar()) != 'q') {
        switch (choice) {
            case '1':
                printf("Choice 1)\n");
                break;
            case '2':
                printf("Choice 2)\n");
                break;
            case '3':
                printf("Chosen 3)\n");
                break;
            case '4':
                printf("Chosen 4)\n");
                break;
            default:
                printf("I don't know what your chosen.\n");
                break;
        }
        while (getchar() != '\n')
            ;
    }

    printf("This is absolutely a \\n, and it's ascii code in hex is: %x.\n", getchar());
    return 0;
}