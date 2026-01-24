// Oshan Bandara
// CSCI 221
// 16599418
// Assignment 1 - P3

#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%99s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old.\n", name, age);
    return 0;
}