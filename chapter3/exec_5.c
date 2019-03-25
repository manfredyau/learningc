#include <stdio.h>
int main(void)
{
    float speed;
    float fileSize;
    printf("Please enter the speed (Mb/s):\n");
    scanf("%f", &speed);
    printf("Please enter the file size (MB):\n");
    scanf("%f", &fileSize);
    printf("A %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.",
           speed, fileSize, fileSize / speed * 8);

    return 0;
}