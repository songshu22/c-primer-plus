/*Programming Exercises 9-4 */

/*
    The harmonic mean of two numbers is obtained by taking the inverses of the two
    numbers, averaging them, and taking the inverse of the result. Write a function that
    takes two double arguments and returns the harmonic mean of the two numbers.

    Please enter two numbers: 4 5
    The harmonic mean of 4.000000 and 5.000000 is 4.444444.

    Next two numbers (# to quit): 9 1
    The harmonic mean of 9.000000 and 1.000000 is 1.800000.

    Next two numbers (# to quit): 1 1
    The harmonic mean of 1.000000 and 1.000000 is 1.000000.

    Next two numbers (# to quit): #
    Bye!

 */

#include <stdio.h>

void harmonic_mean(double num1, double num2);

int main(void) {
    double num1, num2;
    printf("Please enter two numbers: ");
    while (scanf("%lf %lf", &num1, &num2) == 2) {
        harmonic_mean(num1, num2);
        printf("Next two numbers （# to quit): ");
    }
    return 0;
}

void harmonic_mean(double num1, double num2) {
    double x = 1.0 / ((1.0 / num1 + 1.0 / num2) / 2.0);
    printf("The harmonic mean of %lf and %lf is %lf.\n", num1, num2, x);
}