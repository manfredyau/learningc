#include <stdio.h>

#define FLAG_ADD 'a'
#define FLAG_SUBTRACT 's'
#define FLAG_MULTIPLY 'm'
#define FLAG_DIVIDE 'd'

float get_num();

int main(void) {
    float a, b;
    int operation;
    char symbol;
    printf("Enter the operation of your choice:\n"
           "a. add\t\ts. subtract\n"
           "m. multiply\t\td. divide\n"
           "q. quit\n");

    while ((operation = getchar()) != 'q') {
        if (!(operation == FLAG_ADD || operation == FLAG_SUBTRACT ||
              operation == FLAG_MULTIPLY || operation == FLAG_DIVIDE)) {
            continue;
        } else {
            printf("Enter first number: ");
            a = get_num();
            printf("Enter second number: ");
            b = get_num();
        }

        float result = 0;
        if (operation == FLAG_ADD) {
            result = a + b;
            symbol = '+';
        } else if (operation == FLAG_SUBTRACT) {
            result = a - b;
            symbol = '-';
        } else if (operation == FLAG_MULTIPLY) {
            result = a * b;
            symbol = '*';
        } else {
            result = a / b;
            symbol = '/';
        }
        printf("%.2f %c %.2f = %.2f\n", a, symbol, b, result);
        printf("Enter the operation of your choice:\n"
               "a. add\t\ts. subtract\n"
               "m. multiply\t\td. divide\n"
               "q. quit\n");
    }

    return 0;
}

float get_num() {
    float num;
    char ch;
    while (scanf("%f", &num) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        printf(" is no an number.\n"
               "Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    while (getchar() != '\n') {
        continue;
    }

    return num;
}