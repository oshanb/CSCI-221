// Oshan Bandara
// CSCI 221
// 16599418
// Assignment 1 - P4
#include <stdio.h>

int main(void) {
    int num;
    int i;

    printf("Enter an Intiger: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        for (int i = 0; i < 5; i++) {
            printf("Even\n");
        }
    } else {
        for (int i =0; i<5; i++) {
            printf("Odd\n");
        }
    }
    return 0;
}