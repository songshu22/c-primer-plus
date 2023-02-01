/* Programming Exercise 6-5 */

/*
    Have a program request the user to enter an uppercase letter. Use nested loops to produce
    a pyramid pattern like this:

        A
    ABA
    ABCBA
    ABCDCBA
    ABCDEDCBA

    The pattern should extend to the character entered. For example, the preceding pattern
    would result from the input value of E. Hint: Use an outer loop to handle the rows. Use
    three inner loops in a row, one to handle the spaces, one for printing letters in ascending
    order, and one for printing letters in descending order. If your system doesn't use ASCII
    or a similar system that represents letters in a strict number order, see the suggestion in
    programming exercise 3.
*/

#include<stdio.h>

int main(void) {
    char input;
    printf("Please enter a letter: ");
    scanf("%c", &input);
    
    for (int i = 1; i <= 4; i++) {
        int j;
        for (j = 0; j <= i; j++) {
            printf("%c", input + j);

        }
        for (int k = 2; k < j; k++) {
            printf("%c", input + j - k);
        }
        printf("%c\n", input);
    }
    return 0;
}