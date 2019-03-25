#include <stdio.h>
void printCube(int root);
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printCube(num);
}

void printCube(int root)
{
    printf("%d 's cube is: %i\n",root, root * root * root);
}