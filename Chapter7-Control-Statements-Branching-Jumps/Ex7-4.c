/* Programming Exercise 7-4 */

/*
    Using if else statements, write a program that reads input up to #, replaces each period
    with an exclamation mark, replaces each exclamation mark initially present with two
    exclamation marks, and reports at the end the number of substitutions it has made.

    Please enter your characters:
    !!!!
    !!!!!!!!
    !!!!!!!!!!!!
    !!!!!!!!!!!!!!!!!!!!!!!!
    dadasds. sdadasdsad!!#
    dadasds! sdadasdsad!!!!
    It has made 19 substitutions.
*/

#include<stdio.h>

#define STOP '#'

int main(void) {
    char ch;
    int subs = 0;

    printf("Please enter your characters: ");
    while ((ch = getchar()) != STOP) {
        switch (ch) {
            case '.':
                putchar('!');
                subs++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                subs++;
                break;
            default:
                putchar(ch);
        }
    }
    printf("\nIt has made %d substitutions.\n", subs);
    return 0;
}