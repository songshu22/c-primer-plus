/* Programming Exercises 9-5 */

/*
    Write and test a function called larger_of() that replaces the contents of two double
    variables with the maximum of the two values. For example, larger_of(x,y) would
    reset both x and y to the larger of the two.

    Please enter two numbers: 5 6
    Now they are reset to the larger one of the two, so they are: 6.000000 6.000000.
    Please enter the next two numbers (# to quit): 9 -6
    Now they are reset to the larger one of the two, so they are: 9.000000 9.000000.
    Please enter the next two numbers (# to quit): 3 0
    Now they are reset to the larger one of the two, so they are: 3.000000 3.000000.
    Please enter the next two numbers (# to quit): #
    Bye!

 */

#include <stdio.h>

void larger_of(double *num1, double *num2);

int main(void) {
    double num1, num2;
    printf("Please enter two numbers: ");
    while (scanf("%lf %lf", &num1, &num2) == 2) {
        larger_of(&num1, &num2);
        printf("Now they are reset to the larger one of the two, so they are: %lf %lf.\n", num1, num2);
        printf("Please enter the next two numbers (# to quit): ");
    }
    printf("Bye!\n");
    return 0;
}

void larger_of(double *num1, double *num2) {
    if (*num1 >= *num2) {
        *num2 = *num1;
    } else {
        *num1 = *num2;
    }
}