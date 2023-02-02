/* Programming Exercise 7-6 */

/*
    Write a program that reads input up to # and reports the number of times that the
    sequence ei occurs.

    Note:
    The program will have to "remember" the preceding character as well as the current character.
    Test it with input such as "Receive your eieio award."

    Please enter your characters:
    Receive your eieio award.
    #
    The number of times that the sequence ei occurs is 3.
*/

#include<stdio.h>

#define STOP '#'

int main(void) {
    printf("Please enter your characters: ");
    char prev, ch;
    int count = 0;

    while ((ch = getchar()) != STOP) {
        if (prev == 'e' && ch == 'i') {
            count++;
        }
        prev = ch;
    }

    printf("The number of times that the sequence ei occurs is %d.\n", count);
    return 0;
}
