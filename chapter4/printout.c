#include <stdio.h>

#define PI 3.141593

int main(void) {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    char ch[40] = "$%d\n";
    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %A.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf(ch, 2 * cost);
//    printf("%-+8dabc\n", 123);
//    printf("% f\n", -1.2);
//    printf("%#g\n", 0.0);
//    printf("%020d\n", 123);
//    unsigned char ch2 = '1';
//    printf("%hhx\n", ch2);
    return 0;
}