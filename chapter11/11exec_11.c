#include <stdio.h>
#include <string.h>
#define ELEMENTS 11
#define SIZE 50
void print_strings(char *str[], int number) {
    int i;
    for (i = 0; i < number; i++) {
        puts(str[i]);
    }
}

void print_strings_in_ascii(char *str[], int number) {
    int i, j;
    int min_index;
    char *min_ptr;
    for (i = 0; i < number - 1; i++) {
        min_index = i;
        for (j = i + 1; j < number; j++) {
            if (*str[j] < *str[min_index]) {
                min_index = j;
            }
        }
        min_ptr = str[min_index];
        str[min_index] = str[i];
        str[i] = min_ptr;

    }

    for (i = 0; i < number; i++) {
        puts(str[i]);
    }
}

void print_string_sort_by_length(char *strings[], int number) {
    char *cpy_strings[number];
    for (int i = 0; i < number; i++) {
        cpy_strings[i] = strings[i];
    }
    int i, j;
    char *temp;
    for (i = 0; i < number - 1; i++) {
        for (j = i + 1; j < number; j++) {
            if (strlen(cpy_strings[j]) < strlen(cpy_strings[i])) {
                temp = cpy_strings[j];
                cpy_strings[j] = cpy_strings[i];
                cpy_strings[i] = temp;
            }
        }
    }

    for (i = 0; i < number; ++i) {
        puts(cpy_strings[i]);
    }
}

void print_string_sort_by_first_word_length(char *strings[], int number) {
    int i, j;
    char *tmp;

    // 創建一個副本，這樣就不必改变源指針數組中的內容了
    char *cpy_strings[number];
    for (i = 0; i < number; i++) {
        cpy_strings[i] = strings[i];
    }

    for (i = 0; i < number - 1; i++) {
        for (j = i + 1; j < number; j++) {
            if (strchr(cpy_strings[j], ' ') - cpy_strings[j] < strchr(cpy_strings[i], ' ') - cpy_strings[i]) {
                tmp = cpy_strings[j];
                cpy_strings[j] = cpy_strings[i];
                cpy_strings[i] = tmp;
            }
        }
    }

    for (i = 0; i < number; i++) {
        puts(cpy_strings[i]);
    }
}

int main(void) {
    char *strs[SIZE] = {
            "ABCD a",
            "manfred a",
            "Yau aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
    };
//    print_strings(strs, 3);
//    puts("-----------------------------------------------------");
//    print_strings_in_ascii(strs, 3);
//    puts("-----------------------------------------------------");
//    print_string_sort_by_length(strs, 3);
    print_string_sort_by_first_word_length(strs, 3);
    return 0;
}
