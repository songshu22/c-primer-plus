/* Programming Exercises 10-8.c */

/*
     Use a copy function from Programming Exercise 2 to copy the third through fifth
     elements of a seven-element array into a three-element array. The function itself need
     not be altered; just choose the right actual arguments. (The actual arguments need not be
     an array name and array size. They only have to be the address of an array element and a
     number of elements to be processed.)

     3.3 4.4 5.5


 */

#include <stdio.h>

void copy_arr(double target[], double source[], int size);

int main(void) {
    double source[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[] = {};
    copy_arr(target, source+2, 3);
    for (int i = 0; i < 3; i++) {
        printf("%.1lf ", target[i]);
    }
    printf("\n");

    return 0;
}

void copy_arr(double target[], double source[], int size) {
    for (int i = 0; i < 5; i++) {
        target[i] = source[i];
    }
}
