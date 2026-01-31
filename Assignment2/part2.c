// Oshan Bandara
// CSCI 221
// 16599418
// Assignment 2 - P2
#include <stdio.h>
#include <string.h>


int sum_ints(const int *a, size_t n) {
    int sum = 0;
    const int *p = a;
    const int *end = a + n;

    while (p < end) {
        sum += *p;
        p++;
    }
    return sum;
}

// reverse
void reverse_inplace(char *s) {
    char *left = s;
    char *right = s + strlen(s) - 1;

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main(void) {
    int nums[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(nums) / sizeof(nums[0]);

    printf("Sum = %d\n", sum_ints(nums, n));

    char s[] = "systems";
    printf("Before reverse: %s\n", s);
    reverse_inplace(s);
    printf("After reverse:  %s\n", s);

    return 0;
}