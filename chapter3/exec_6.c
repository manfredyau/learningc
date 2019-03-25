#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstName[40];
    char lastName[40];
    printf("Enter your first name:\n");
    scanf("%s", firstName);
    printf("Enter your last name:\n");
    scanf("%s", lastName);
    printf("%10s%10s\n", firstName, lastName);
    printf("%10zd%10zd\n", strlen(firstName), strlen(lastName));
}