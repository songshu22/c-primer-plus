/* Programming Exercise 6-9 */

// Modify exercise 8 so that it uses a function to return the value of the calculation.
#include<stdio.h>
float calc(float input1, float input2);

int main(void) {
    float input1, input2;
    printf("Please enter two floating-point numbers: ");
    while (scanf("%f %f", &input1, &input2) == 2) {
        printf("The value of their difference divided by their product is %f\n", calc(input1, input2));
        printf("Please enter another pair (non-numeric to quit): ");
    }
    return 0;
}

float calc(float input1, float input2) {
    return (input1 - input2) / (input1 * input2); 
}