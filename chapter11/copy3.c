#include <stdio.h>
#include <string.h>
#include "functions.h"
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
int main(void)
{
    char qwords[LIM][TARGSIZE];
    char temp[SIZE];

    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE)) {
        if (temp[0] != 'q') {
            printf("%s doesn't begin with q!\n", temp);
        } else {
            strncpy(qwords[i], temp, TARGSIZE - 1);
            qwords[i][TARGSIZE - 1] = '\0';
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIM; i++) {
        puts(qwords[i]);
    }

    return 0;
}
