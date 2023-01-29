/* Programming Exercise 3-2 */

/*
    Write a program that asks you to enter an ASCII code value, such as 66, and then prints
    the character having that ASCII code.
*/

#include<stdio.h>

int main(void) {
    int val;
    printf("Please enter an ASCII code value: ");
    scanf("%d", &val);
    printf("The character of %d is %c.\n", val, val);
    return 0;
}