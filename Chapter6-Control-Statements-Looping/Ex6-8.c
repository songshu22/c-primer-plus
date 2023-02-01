/* Programming Exercise 6-8 */

/*
    Write a program that requests two floating-point numbers and prints the value of their
    difference divided by their product. Have the program loop through pairs of input values
    until the user enters nonnumeric input.
*/

#include<stdio.h>

int main(void) {
    float input1, input2;
    printf("Please enter two floating-point numbers: ");
    while (scanf("%f %f", &input1, &input2) == 2) {
        printf("The value of their difference divided by their product is %f\n", (input1 - input2) / (input1 * input2));
        printf("Please enter another pair (non-numeric to quit): ");
    }
    return 0;
}