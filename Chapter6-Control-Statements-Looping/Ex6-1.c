/* Programming Exercise 6-1 */

/*
    Write a program that creates an array with 26 elements and store the 26 lowercase
    letters in it. Also have it shows the array contents.
*/

#include<stdio.h>
#define SIZE 26

int main(void) {
    char lowercase[SIZE];
    for (int i = 0; i < SIZE; i++) {
        lowercase[i] = 'a' + i;
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%c", lowercase[i]);
    }
    printf("\n");
    return 0;
}