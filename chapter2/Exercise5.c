#include <stdio.h>

void br(void);

void ic(void);

int main(void) {
    br();
    printf(", ");
    ic();
    printf("\nIndia, China,%s", "\n");
    printf("Brazil, Russia\n");
}

void br(void) {
    printf("Brazil, Russia");
}

void ic(void) {
    printf("India, China");
}

