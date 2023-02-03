/* Programming Exercise 8-4 */

/*
    Write a program that reads input as a stream of characters until encoutering EOF. Have
    it report the average number of letters per word. Don't count whitespace as being letters
    in a word. Actually, punctuation shouldn't be counted either, but don't worry about that
    now. (If you do want to worry about it, consider using the ispunct() function from the
    ctype.h family.)

    a few warm days
    winter has abated
    reappearing today with frigid temperatures
    deep drifts and icicle cascades
    bushes of tiny golden forsythia
    blooming too early in snow
    The average number of letters per word is 5.22.

 */

#include<stdio.h>
#include<ctype.h>

int main(void) {
    int num_words = 0, num_chars = 0;
    float average;
    char ch;
    while ((ch = getchar()) != EOF) {
        if (isalnum(ch)) {
            num_chars++;
        } else if (isspace(ch) && num_chars ) {
            num_words++;
        }
    }
    average = (float)num_chars / (float)num_words;
    printf("The average number of letters per word is %.2f.\n", average);
    return 0;
}
