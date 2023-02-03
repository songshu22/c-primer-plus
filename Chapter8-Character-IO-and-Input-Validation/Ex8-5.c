/* Programming Exercise 8-5 */

/*
    Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing
    strategy. For example, have the program initially guess 50, and have it ask the user
    whether the guess is high, lower, or correct. If, say, the guess is low, have the next guess
    be halfway between 50 and 100, that is, 75. If that guess is high, let the next guess be
    halfway between 75 and 50, and so on. Using this binary search strategy, the program
    quickly zeros in on the correct answer, at least if the user does not cheat.

    Pick an integer from 1 to 100. I will try to guess it.
    Respond with a l if my guess is lower, with a h if it is higher and with a c if it is correct.
    Uh...is your number 50?
    l
    Well, then, is it 75?
    l
    Well, then, is it 87?
    l
    Well, then, is it 93?
    h
    Well, then, is it 90?
    h
    Well, then, is it 88?
    y
    Please enter h or l or c.
    c
    I knew I could do it!

 */

/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>
int main(void)
{
    int guess = 50;
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a l if my guess is lower, with a h if it is higher and with a c if it is correct.\n");
    printf("Uh...is your number 50?\n");

    char user_input;
    while ((user_input = getchar()) != EOF) {
        switch (user_input) {
            case 'l':
                guess = guess + (int)((float )(100-guess) * 0.5);
                printf("Well, then, is it %d?\n", guess);
                continue;
            case 'h':
                guess = guess - (int)((float )(100-guess) * 0.5);
                printf("Well, then, is it %d?\n", guess);
                continue;
            case 'c':
                printf("I knew I could do it!\n");
                break;
            case '\n':
                continue;
            default:
                printf("Please enter h or l or c.\n");
                continue;
        }
        break;
    }
}
