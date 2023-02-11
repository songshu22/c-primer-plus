/* Programming Exercises 10-3 */

/*
    Write a function that returns the largest value stored in an array-int. Test the function
    in a simple program.
 */

#include <stdio.h>
#define SIZE 10

int largest(int *arr);

int main(void) {
    int arr[SIZE] = {0, 5, 1, -9, 3, 99, -2, 100, 7, 2};
    printf("The largest value stored in the array is %d.\n", largest(arr));

    return 0;
}

int largest(int *arr) {
    int max = arr[0];
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
    }
    return max;
}

