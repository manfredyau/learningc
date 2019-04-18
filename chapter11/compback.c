#include <stdio.h>
#include <string.h>
#include <inttypes.h>
int main(void) {
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\",\"apple\")");
    printf("%d\n", strcmp("apples", "apple"));

    printf("'s' - '\\0' = %d\n", 's' - '\0');

    return 0;
}