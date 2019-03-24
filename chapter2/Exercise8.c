//
// Created by Yau on 2019/3/2.
//
#include <stdio.h>

void one_three(void);
void one(void);
void two(void);
void three(void);

int main(void){
    printf("starting now:\n");
    one_three();
    printf("done!");
}

void one_three(void){
    one();
    two();
    three();
}

void one(void){
    printf("one\n");
}

void two(void){
    printf("two\n");
}

void three(void){
    printf("three\n");
}

