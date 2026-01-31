// Oshan Bandara
// CSCI 221
// 16599418
// Assignment 2 - P4
#include <stdio.h>

//Clamp
void clamp(int *x, int lo, int hi) {
    if (*x < lo) {
        *x = lo;
    } else if (*x > hi) {
        *x = hi;
    }
}


int square(int x) {
    return x * x;
}

int negate(int x) {
    return -x;
}


 // apply 
int apply(int *a, size_t n, int (*op)(int)) {
    if (a == NULL || op == NULL) {
        return 0;
    }

    for (size_t i = 0; i < n; i++) {
        a[i] = op(a[i]);
    }
    return (int)n;
}

static void print_array(const int *a, size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i + 1 < n) printf(", ");
    }
    printf("]\n");
}

int main(void) {
    int x = 25;

    printf("Before clamp: x = %d\n", x);
    clamp(&x, 0, 10);
    printf("After clamP [0,10]: x = %d\n\n", x);

    int arr[] = {1, -2, 3, -4};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);

    apply(arr, n, square);
    printf("After apply(square): ");
    print_array(arr, n);

    apply(arr, n, negate);
    printf("After apply(negate): ");
    print_array(arr, n);

    return 0;
}
