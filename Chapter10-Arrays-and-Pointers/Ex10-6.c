/* Programming Exercises 10-6.c */

/*
    Write a function that reverses the contents of an array of double and test it in a simple
    program.

    The contents of the array are:
    1.1
    2.2
    3.3

    The contents of the array now are:
    3.3
    2.2
    1.1

 */

#include <stdio.h>
#define SIZE 6

void reverse_arr(double arr[]);

int main(void) {
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    printf("The contents of the array are:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.1lf\n", arr[i]);
    }
    reverse_arr(arr);

    printf("The contents of the array now are:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.1lf\n", arr[i]);
    }
    return 0;
}

void reverse_arr(double arr[]) {
    for (int i = 0; i < SIZE / 2; i++) {
        double tmp = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = tmp;
    }
}

