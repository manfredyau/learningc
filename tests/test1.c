#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

struct person
{
    int age;
    char name[50];
};

int main(void)
{
    struct person one;
    one = (struct person){
            21,
            "Manfred"
    };

    int arr[2];
    arr = (int[2]) {10, 20};
    return 0;
}


