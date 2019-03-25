#include <stdio.h>
#include <limits.h>
#include <inttypes.h>

int main(void) {
    int32_t overFlow = INT_MAX + 1;
    float floatOverFlow = 1.23456789E10;
    printf("%"PRId32"\n", overFlow);
    printf("%f\n", floatOverFlow);
    return 0;
}