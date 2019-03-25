#include <stdio.h>
#include <inttypes.h>

int main(void) {
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%ld\n", sizeof(long));
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    int letters = printf("%ld %ld %"   PRId32   " %"   PRId32  "\n", n1, n2, n3, n4);
    printf("%d\n", letters);
    return 0;
}