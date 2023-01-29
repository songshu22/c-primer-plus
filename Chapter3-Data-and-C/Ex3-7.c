/* Programming Exercise 3-7 */

/*
    There are 2.54 centimeters to the inch. Write a program that asks you to enter your
    height in inches and then displays your height in centimeters. Or, if you prefer, ask for
    the height in centimeters and converts that to inches.
*/

#include<stdio.h>

int main(void) {
    float height_cm;

    printf("Please enter your height in centimeters: ");
    scanf("%f", &height_cm);
    printf("Your height in inches is %f.\n", height_cm / 2.54);

    return 0;
}