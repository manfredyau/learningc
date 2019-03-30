#include <stdio.h>
void show_info(void);
int get_choice(int, int);
int main(void)
{
    show_info();
    int choice = get_choice(1, 4);

    printf("Your option is ");
    switch (choice)
    {
        case 1:
            printf("copy files.\n");
            break;
        case 2:
            printf("move files.\n");
            break;
        case 3:
            printf("remove files.\n");
            break;
        case 4:
            printf("quit.\n");
            break;
        default:
            printf("ERROR!!!\n");
            break;
    }

    return 0;
}

void show_info(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files        2) move files\n");
    printf("3) remove files      4) quit\n");
    printf("Enter the number of our choice: ");
}

int get_choice(int low, int high)
{
    int option;
    int read_successfully;
    read_successfully = scanf("%d", &option);

    // 如果用户輸入的並非是一個整數，那麼直接返回4
    if (read_successfully != 1)
    {
        return 4;
    }

    while (option < low || option > high)
    {
        printf("Please enter a number between 1 and 4: ");
        read_successfully = scanf("%d", &option);

        if (read_successfully != 1)
        {
            return 4;
        }
    }

    return option;
}