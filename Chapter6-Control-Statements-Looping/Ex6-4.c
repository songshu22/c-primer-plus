/* Programming Exercise 6-4 */

/*
    Use nested loops to produce the following pattern:

    A
    BC
    DEF
    GHIJ
    KLMNO
    PORSTU

    If your system doesn't encode letters in numeric order, see the suggestion in
    programming exercise 3.
*/
#include<stdio.h>

int main(void) {
    int counter = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + counter);
            counter++;
        }
        // counter++;
        printf("\n");
    }
    return 0;
}