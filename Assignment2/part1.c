// Oshan Bandara
// CSCI 221
// 16599418
// Assignment 2 - P1
#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    // print the x,p and *p
    printf("x = %d\n", x);
    printf("p = %p\n", (void *)p);
    printf("*p = %d\n", *p);

    *p = 20;

    printf("\nAfter *p = 20:\n");
    printf("x  = %d\n", x);
    printf("*p = %d\n", *p);

    return 0;

}