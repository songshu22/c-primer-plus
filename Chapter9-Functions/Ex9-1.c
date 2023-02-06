/* Programming Exercises 9-1 */

/*
 *  Devise a function called min(x,y) that returns the smaller of two double values. Test
 *  the function with a simple driver.
 *  Please enter two double values: 3 2
 *  2.000000 is the smaller value.
 *  The next two numbers (q to quit): 1 2
 *  1.000000 is the smaller value.
 *  The next two numbers (q to quit): q
 */

#include <stdio.h>

double min(double num1, double num2);

int main(void) {
    double num1, num2;
    printf("Please enter two double values: ");

    while (scanf("%lf %lf", &num1, &num2) == 2) {
        double smaller = min(num1, num2);
        printf("%lf is the smaller value.\n", smaller);
        printf("The next two numbers (q to quit): ");
    }

    return 0;
}

double min(double num1, double num2) {
    return num1 <= num2 ? num1 : num2;
}