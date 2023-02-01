/* Programming Exercise 6-14 */

/*
    Write a program that creates two eight-element arrays of doubles and uses a loop to let
    the user enter values for the eight elements of the first array. Have the program set the
    elements of the second array to the cumulative totals of the elements of the first array.
    For example, the fourth element of the second array should equal the sum of the first
    four elements of the first array, and the fifth element of the second array should equal
    the sum of the first five elements of the first array. (It's possible to do this with nested
    loops, but by using the fact that the fifth element of the second array equals the fourth
    element of the second array plus the fifth element of the first array, you can avoid
    nesting and just use a single loop for this task.) Finally, use loops to display the contents
    of the two arrays, with the first array displayed on one line and with each element of the
    second array displayed below the corresponding element of the first array.

    Please enter eight numbers:
    1 2 3 4 5 6 7 8
        1        2        3        4        5        6        7        8
        1        3        6       10       15       21       28       36
*/

#include<stdio.h>
#define SIZE 8

int main(void) {
    double arr1[SIZE];
    double arr2[SIZE];

    printf("Please enter eight numbers: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &arr1[i]);
    }

    arr2[0] = arr1[0];
    for (int i = 1; i < SIZE; i++) {
        arr2[i] = arr2[i-1] + arr1[i];
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%.2lf ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2lf ", arr2[i]);
    }
    printf("\n");

    return 0;
}