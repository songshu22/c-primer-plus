/* Programming Exercise 7-1 */

/*
    Write a program that reads input until encountering the # character and then reports
    the number of spaces read, the number of newline characters read, and then number of all
    other characters read.

    Please enter your characters:
    Hi how are you
    #
    The number of spaces read is 3.
    The number of newline characters read is 1.
    The number of all other characters read is 11.
*/

#include<stdio.h>
#include<ctype.h>

#define STOP '#'

int main(void) {
    int num_spaces = 0;
    int num_newlines = 0;
    int num_chars = 0;
    char ch;
    printf("Please enter your characters: ");

    while ((ch = getchar()) != STOP) {
        switch (ch)
        {
        case ' ':
            num_spaces++;
            break;
        case '\n':
            num_newlines++;
            break;
        default:
            num_chars++;
        }
    }
    printf("The number of spaced read is %d.\n", num_spaces);
    printf("The number of newline read is %d.\n", num_newlines);
    printf("The number of all other characters read is %d.\n", num_chars);

    return 0;
}
