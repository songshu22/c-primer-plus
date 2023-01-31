/* Programming Exercise 5-7 */

/*
    Write a program that requests a type double number and prints the value of the number
    cubed. Use a function of your own design to cube the value and print it. The main()
    program should pass the entered value to this function.
*/

#include<stdio.h>

void cube(double input);

int main(void) {
    double input;
    printf("Please enter a type double number: ");
    scanf("%lf", &input);
    cube(input);

    return 0;
}

void cube(double input) {
    printf("The value of %e cubed is %e.\n", input, input * input * input);
}