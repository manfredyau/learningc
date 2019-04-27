#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char ch;

    int words = 0;
    int upper_letters = 0;
    int lower_letters = 0;
    int puncts = 0;
    int number_chars = 0;
    _Bool inword = 0;
    puts("Enter lots of characters plz: ");
    while ((ch = getchar()) != EOF) {
        if (isupper(ch))
            upper_letters++;
        else if (islower(ch))
            lower_letters++;
        else if (ispunct(ch))
            puncts++;
        else if (isdigit(ch))
            number_chars++;

        if (isalpha(ch) && !inword) {
            words++;
            inword = 1;
        } else if (isspace(ch) && inword) {
            inword = 0;
        }
    }

    printf("There are %d words,\n", words);
    printf("%d upper letters and %d lower letters, \n", upper_letters, lower_letters);
    printf("%d puncts and %d digits.\n", puncts, number_chars);

    return 0;
}