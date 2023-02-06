/* Programming Exercises 9-6 */

/*
    Write and test a function that takes the addresses of three double variables as arguments
    and that moves the value of the smallest variable into the first variable, the middle value
    to the second variable, and the largest value into the third variable.


 */

#include <stdio.h>

void sort_numbers(double *x, double *y, double *z);

int main(void) {
    double x, y, z;
    printf("Please enter three numbers: ");
    while (scanf("%lf %lf %lf", &x, &y, &z) == 3) {
        sort_numbers(&x, &y, &z);
        printf("Numbers are sorted to: %lf, %lf, %lf.\n", x, y, z);
        printf("Please enter the next three numbers: ");
    }


    return 0;
}

// x < y < z
void sort_numbers(double *x, double *y, double *z) {
    if ( *x >= *y) {
        double tmp = *y;
        *y = *x;
        *x = tmp;
    }
    if (*y >= *z) {
        double tmp = *z;
        *z = *y;
        *y = tmp;
    }
    if (*x >= *z) {
        double tmp = *z;
        *z = *x;
        *x = tmp;
    }
    if ( *x >= *y) {
        double tmp = *y;
        *y = *x;
        *x = tmp;
    }
}
