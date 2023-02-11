/* Programming Exercises 10-4.c */

/*
     Write a function that returns the index of the largest value stored in an array-of-double.
     Test the function in a simple program.
 */

#include <stdio.h>

#define SIZE 10

int largest_idx(int *arr);

int main(void) {
    int arr[SIZE] = {0, 5, 1, -9, 3, 99, -2, 100, 7, 2};
    printf("The index of the largest value stored in the array is %d.\n", largest_idx(arr));

    return 0;
}

int largest_idx(int *arr) {
    int max_idx = 0;
    int max = arr[0];
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= max) {
            max = arr[i];
            max_idx = i;
        }
    }
    return max_idx;
}

