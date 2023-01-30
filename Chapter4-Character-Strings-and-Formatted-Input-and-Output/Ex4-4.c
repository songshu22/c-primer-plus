/* Programming Exercise 4-4 */

/*
    Write a program that requests your height in inches and your name, and then displays
    the information in the following form:

    Dabney, you are 6.208 feet tall

    Use type float, and use / for division. If you prefer, request the height in centimeters
    and display it in meters.

*/

#include<stdio.h>

int main(void) {
    float height_cm;
    char name[10];

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Please enter your height in centimeters: ");
    scanf("%f", &height_cm);

    printf("%s, you are %.2f meters tall.\n", name, height_cm / 100);
    return 0;
}