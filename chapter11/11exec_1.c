#include <stdio.h>
#define SIZE 11
char *read(char *arr, int n) {
    int count = 0;
    char ch;
    while (count < n) {
        ch = getchar();
        if (ch != EOF) {
            arr[count] = getchar();
            count++;
        } else {
            return NULL;
        }
    }
    arr[count] = '\0';
    return arr;
}

int main(void) {
    char str[SIZE];
    puts("Enter a string: ");
    read(str, SIZE - 1);
    printf("%s\n", str);

    return 0;
}