/* Programming Exercises 9-7 */

/*
    Write a program that reads characters from the standard input to end-of-file. For each
    character, have the program report whether it is a letter. If it is a letter, also report
    its numerical location in the alphabet. For eaxmple, c and C would both be letter 3.
    Incorporate a function that takes a character as an argument and returns the numerical
    location if the character is a letter and returns -1 otherwise.

    Please enter your characters: c
    c is a letter, its numeric location in the alphabet is 3.
    Please enter your characters: C
    C is a letter, its numeric location in the alphabet is 3.
    Please enter your characters: a
    a is a letter, its numeric location in the alphabet is 1.
    Please enter your characters: 1
    1 isn't a letter.
    Please enter your characters: 2
    2 isn't a letter.
    Please enter your characters: q
    q is a letter, its numeric location in the alphabet is 17.
    Please enter your characters: ^C

 */

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    printf("Please enter your characters: ");
    while ((ch = getchar()) != EOF) {
        while (getchar() != '\n') continue;
        if (isalpha(ch)) {
            int pos;
            if (isupper(ch)) {
                pos = ch - 64;
            } else {
                pos = ch - 96;
            }
            printf("%c is a letter, its numeric location in the alphabet is %d.\n", ch, pos);
        } else {
            printf("%c is't a letter.\n", ch);
        }
        printf("Please enter your characters: ");
    }
    return 0;
}