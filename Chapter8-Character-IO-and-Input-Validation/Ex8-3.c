/* Programming Exercise 8-3 */

/*
    Write a program that reads input as a stream of characters until encountering EOF.
    Have it report the number of uppercase letters, the number of lowercase letters, and the
    number of other characters in the input. You may assume that the numeric values for the
    lowercase letters are sequantial and assume the same for uppercase. Or, more portably,
    you can use appropriate classification functions from the ctype.h library.

    Hi, how are you
    Hello?
    Is anyone around?
    OK, Fine! 
    The number of uppercase letters is 6,
    the number of lowercase letters is 30,
    and the number of other characters is 15.
*/

#include<stdio.h>
#include<ctype.h>

int main(void) {
    char ch;
    int num_upper = 0, num_lower = 0, num_other = 0;
    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            num_upper++;
        } else if (islower(ch)) {
            num_lower++;
        } else {
            num_other++;
        }
    }
    printf("The number of uppercase letters is %d.\n", num_upper);
    printf("The number of lowercase letters is %d.\n", num_lower);
    printf("The number of other characters is %d.\n", num_other);
    return 0;
}
