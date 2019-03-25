#include <stdio.h>
const int MIN_PER_HOUR = 60;

int main(void) {
    int minute, hour, left;
    printf("Enter a time in minute:\n");
    scanf("%d", &minute);
    while (minute > 0) {
        hour = minute / MIN_PER_HOUR;
        left = minute % MIN_PER_HOUR;
        printf("%d minutes can be transfer to %d hours and %d minutes.\n", minute, hour, left);
        printf("------------------------------------------------\n");
        printf("Continue? Just enter minute again.\n");
        scanf("%d", &minute);
    }

    return 0;
}