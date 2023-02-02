/* Programming Exercise 7-2 */

/*
    Write a program that reads input until encoutering #. Have the program print each
    input character and its ASCII decimal code. Print eight character-code pairs per line.
    Suggestion: Use a character count and the modulus operator (%) to print a newline
    character for every eight cycles of the loop.

    Please enter your characters:
    abcabcabcabcabc
    a- 97 b- 98 c- 99 a- 97 b- 98 c- 99 a- 97 b- 98 
    c- 99 a- 97 b- 98 c- 99 a- 97 b- 98 c- 99 
    - 10 
    #
*/

#include<stdio.h>

#define STOP '#'

int main(void) {
    printf("Please enter your characters: ");
    
    char ch;
    int count = 1;
    while ((ch = getchar()) != STOP) {
        printf("%c- %d ", ch, ch);
        if (!(count % 8)) {
            printf("\n");
        }
        count++;
    }
    return 0;
}