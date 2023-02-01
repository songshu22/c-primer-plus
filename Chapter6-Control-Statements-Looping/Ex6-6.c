/* Programming Exercise 6-6 */

/*
    Write a program that prints a table with each line giving an integer, its square, and its
    cube. Ask the user to input the lower and upper limits for the table. Use a for loop.
*/

#include<stdio.h>

int main(void) {
    int lower, upper;
    printf("Enter a lower limit: ");
    scanf("%d", &lower);
    printf("Enter a upper limit: ");
    scanf("%d", &upper);

    for (int i = lower; i < upper; i++) {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    return 0;
}