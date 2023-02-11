/* Programming Exercises 10-5.c */

/*
     Write a function that returns the difference between the largest and smallest elements of
     an array-of-double. Test the function in a simple program.
 */

#include <stdio.h>
#define SIZE 3

double difference(double *array);

int main(void) {
    double array[SIZE] = {1.2, 2.3, 3.4};
    printf("The difference between the largest and smallest is %.1lf.\n", difference(array));
    return 0;
}

double difference(double *array) {

    double min = array[0];
    double max = array[0];
    for (int i = 0; i < SIZE; i++) {
        if (array[i] >= max) {
            max = array[i];
        } else if (array[i] <= min) {
            min = array[i];
        }
    }
    return max - min;
}