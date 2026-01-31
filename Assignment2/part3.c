// Oshan Bandara
// CSCI 221
// 16599418
// Assignment 2 - P3
#include <stdio.h>
#include <stdlib.h>

// make_range (gives out an array)
int *make_range(int start, int end) {
    if (end < start) {
        return NULL;
    }

    size_t n = (size_t)(end - start + 1);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < n; i++) {
        arr[i] = start + (int)i;
    }

    return arr;
}


// gorw_array (realloc to change size)
int *grow_array(int *arr, size_t old_n, size_t new_n) {
    int *tmp = (int *)realloc(arr, new_n * sizeof(int));
    if (tmp == NULL) {
        return NULL; 
    }

    if (new_n > old_n) {
        for (size_t i = old_n; i < new_n; i++) {
            tmp[i] = 0;
        }
    }

    return tmp;
}

static void print_array(const int *arr, size_t n) {
    printf("[");
    for (size_t i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i + 1 < n) printf(", ");
    }
    printf("]\n");
}

int main(void) {
    int start = 3;
    int end = 7;

    int *range = make_range(start, end);
    if (range == NULL) {
        printf("make_range failed (end < start or malloc failed)\n");
        return 1;
    }

    size_t old_n = (size_t)(end - start + 1);
    printf("Range %d..%d: ", start, end);
    print_array(range, old_n);

    size_t new_n = 10;
    int *grown = grow_array(range, old_n, new_n);
    if (grown == NULL) {
        printf("grow_array failed; freeing original array safely.\n");
        free(range);
        return 1;
    }
    range = grown;

    printf("After grow to %zu elements: ", new_n);
    print_array(range, new_n);

    free(range);
    range = NULL;

    return 0;
}
