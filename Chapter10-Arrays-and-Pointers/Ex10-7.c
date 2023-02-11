/* Programming Exercises 10-7.c */

/*
    Write a program that initializes a two-dimensional array-of-double and uses one of the
    copy function from exercise 2 to copy it to a second two-dimensional array. (Because a
    two-dimensional array is an array of arrays, a one-dimensional copy function can be used
    with each subarray.)

    1.1 2.2 3.3
    4.4 5.5 6.6
 */

#include <stdio.h>

void copy_arr(double target[], double source[], int size);

int main(void) {
    double source[2][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}};
    double target[2][3] = {};
    for (int i = 0; i < 2; i++) {{
        copy_arr(target[i], source[i], 3);
    }}
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.1lf ", target[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void copy_arr(double target[], double source[], int size) {
    for (int i = 0; i < size; i++) {
        target[i] = source[i];
    }
}