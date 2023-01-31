/* Programming Exercise 5-6 */

/*
    Now modify the program of Programming Exercise 5 so that it computes the sum of the
    squares of the integers. (If you prefer, how much money you receive if you get $1 the
    first day, $4 the second day, $9 the third day, and so on. This looks like a much better
    deal!) C doesn't have a squaring function, but you can use the fact that the square of n is
    n * n
*/
#include <stdio.h>
int main(void) /* finds sum of first 20 integers */
{
    int count, sum, user_input; /* declaration statement */
    count = 0; /* assignment statement */
    sum = 0; /* ditto */
    printf("Please enter an integer value: ");
    scanf("%d", &user_input);
    while (count++ < user_input) /* while */
        sum = sum + (count * count); /* statement */
    printf("sum = %d\n", sum);/* function statement */
    return 0;
}
