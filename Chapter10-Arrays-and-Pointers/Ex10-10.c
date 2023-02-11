/* Programming Exercises 10-10.c */

/*
    Write a function that sets each element in an array to the sum of the corresponding
    elements in two other arrays. That is, if array 1 has the values 2, 4, 5, and 8 and array 2
    has the values 1, 0, 4, and 6, the function assigns the array 3 the values 3, 4, 9, and 14. The
    function should take three array names and an array size as arguments. Test the function
    in a simple program.

    The contents of the third array:
    3 4 9 14

    int array1[SIZE] = {2, 4, 5, 8};
    int array2[SIZE] = {1, 0, 4, 6};

 */

#include <stdio.h>

#define SIZE 4

int main(void) {

    int arr1[SIZE] = {2, 4, 5, 8};
    int arr2[SIZE] = {1, 0, 4, 6};
    int arr3[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}