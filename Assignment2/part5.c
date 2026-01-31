// Oshan Bandara
// CSCI 221
// 16599418
// Assignment 2 - P5
#include <stdio.h>
#include <stdlib.h>


int global_var = 100;

int main(void) {
    static int static_local = 200;

    int local_auto = 300;

    // Heap allocaton
    int *heap_block = (int *)malloc(5 * sizeof(int));
    if (heap_block == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    printf("Address of global_var        : %p\n", (void *)&global_var);
    printf("Address of static_local      : %p\n", (void *)&static_local);
    printf("Address of local_auto        : %p\n", (void *)&local_auto);
    printf("Address of heap_block var    : %p (pointer)\n", (void *)&heap_block);
    printf("Address heap_block points to : %p\n", (void *)heap_block);

    free(heap_block);
    heap_block = NULL;

    return 0;
}
