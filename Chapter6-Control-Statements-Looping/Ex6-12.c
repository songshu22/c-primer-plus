/* Programming Exercise 6-12 */

/*
    Consider these two infinite series:

    1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
    1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...

    Write a program that evaluates running totals of these two series up to some limit of
    number of terms. Hint: -1 times itself an odd number of times is -1, and -1 times itself
    an even number of times is 1. Have the user enter the limit interactively; let a zero or
    negative value terminate input. Look at the running totals after 100 terms, 1000 terms,
    10,000 terms. Does either series appear to be converging to some value?

    Please enter the number of terms:
    3
    1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... 1.0/3.0 = 1.833333
    1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... 1.0/3.0 = 0.833333
    Please enter the next number of terms (zero or negative to terminate):
    12
    1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... 1.0/12.0 = 3.103211
    1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... 1.0/12.0 = -0.653211
    Please enter the next number of terms (zero or negative to terminate):
    0
    See you next time!
*/

#include<stdio.h>

int main(void) {
    int terms;
    printf("Please enter the number of terms: ");
    scanf("%d", &terms);


    float answer1 = 0.0;
    float answer2 = 0.0;
    while (terms > 0) {
        float sign = 1.0;
        for (int i = 1; i <= terms; i++) {
            answer1 = answer1 + (1.0 / (float)i);
            answer2 = answer2 + (1.0 / (float)i) * sign;
            sign = -sign;  
        }

        printf("%f\n", answer1);
        printf("%f\n", answer2);
        printf("Please enter the number of terms (<= 0 to quit): ");
        scanf("%d", &terms);
    }

    return 0;
}
