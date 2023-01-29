/* Programming Exercise 3-5 */

/*
    There are approximately 3.156 x 10^7 seconds in a year. Write a program that requests
    your age in years and then displays the equivalent number of seconds.
*/

#include<stdio.h>

int main(void) {
    int age_in_year;
    printf("Please enter your age in years: ");
    scanf("%d", &age_in_year);
    printf("Your age in seconds is %e seconds.\n", (float)(age_in_year * 3.156e7));

    return 0;
}