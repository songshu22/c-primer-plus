/* Programming Exercise 5-1 */

/*
    Write a program that converts time in minutes to time in hours and minutes. Use
    #define or const to create a symbolic constant for 60. Use a while loop to allow the
    user to enter values repeatedly and terminate the loop if a value for the time of 0 or less
    is entered.

*/

#include<stdio.h>
#define MPH 60 // minutes per hour

int main(void) {
    int user_input;

    printf("Please enter time in minutes: ");
    scanf("%d", &user_input);
    while (user_input > 0) {
        printf("%d minutes is equal to %d hours %d minutes.\n", user_input, user_input / MPH, user_input % MPH);
        printf("Please enter another time, (time <= 0 to quit): ");
        scanf("%d", &user_input);
    }
    return 0;
}