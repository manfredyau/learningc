#include <stdio.h>

int main(void) {
    int eight_numbers[8];

    for (int i = 0; i < 8; ++i) {
        int result = 2;
        for (int j = 1; j < i + 1; ++j) {
            result *= 2;
        }
        eight_numbers[i] = result;
    }


    int count = 0;
    do {
        printf("%d ", eight_numbers[count++]);
    } while (count < 8);

    return 0;
}