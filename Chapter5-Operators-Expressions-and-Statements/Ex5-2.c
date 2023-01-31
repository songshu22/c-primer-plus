/* Prgramming Exercise 5-2 */

/*
    Write a program that asks for an integer and then prints all the integers from (and
    including) that value up to (and including) a value larger by 10. (That is, if the input is 5,
    the output runs from 5 to 15.) Be sure to seperate each output value by a space or tab or
    newline.
*/

#include<stdio.h>

int main(void) {
    int user_input, target;
    printf("Please enter an integer value: ");
    scanf("%d", &user_input);
    printf("The next 10 integer values are:\n%d\n", user_input);
    
    target = user_input + 10;
    while (user_input++ < target) {
        printf("%d\n", user_input);
    }
    return 0;
}

