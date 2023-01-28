/* Programming Exercise 2-3 */

/*
    Write a program that converts your age in years to days and displays both values. At this
    point, don't worry about fractional years and leap years.
*/

#include<stdio.h>

int main(void) {
    int age = 22;
    int days = age * 365;
    printf("An age of %d years is %d days.\n", age, days);

    return 0;
}