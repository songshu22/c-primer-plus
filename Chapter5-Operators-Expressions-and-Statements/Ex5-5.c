/* Programming Exercise 5-5 */

/*
    Change the program addemup.c (Listing 5.13), which found the sum of the first 20
    integers. (If you prefer, you can think of addemup.c as a program that calculates how
    much money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the
    third day, and so on.) Modify the program so that you can tell it interactively how far
    the calculation should proceed. That is, replace the 20 with a variable that is read in.
*/

/* addemup.c -- four kinds of statements */
#include <stdio.h>
int main(void) /* finds sum of first 20 integers */
{
    int count, sum, user_input; /* declaration statement */
    count = 0; /* assignment statement */
    sum = 0; /* ditto */
    printf("Please enter an integer value: ");
    scanf("%d", &user_input);
    while (count++ < user_input) /* while */
        sum = sum + count; /* statement */
    printf("sum = %d\n", sum);/* function statement */
    return 0;
}
