/* Programming Exercise 5-3 */

/*
    Write a program that asks the user to enter the number of days and then converts that
    value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
    Display results in the following format:

    18 days are 2 weeks, 4 days.

    Use a while loop to allow the user to repeatedly enter day values; terminate the loop
    when the user enters a nonpositive value, such as 0 or -20.
*/

#include<stdio.h>
int main(void) {
    int user_input, weeks, days;
    printf("Please enter the number of days: ");
    scanf("%d", &user_input);
    
    while (user_input > 0) {
        weeks = user_input / 7;
        days = user_input % 7;
        printf("%d days are %d weeks, %d days.\n", user_input, weeks, days);
        printf("Please enter the number days (enter <= 0 to terminate): ");
        scanf("%d", &user_input);

    }
    return 0;
}