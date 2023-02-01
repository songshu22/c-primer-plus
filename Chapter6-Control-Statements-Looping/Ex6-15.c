/* Programming Exercise 6-15 */
 
/*
    Write a program that reads in a line of input and then prints the line in reverse order.
    You can store the input in an array of char; assume that the line is no longer than 255
    characters. Recall that you can use scanf() with the %c specifier to read a character at
    a time from input and that the newline character (\n) is generated when you press the
    Enter key.
*/

#include<stdio.h>
#include<string.h>

#define MAX_SIZE 255

int main(void) {
    char str[MAX_SIZE];

    int i = 0;
    while (scanf("%c", &str[i]) == 1 && str[i] != '\n') {
        i++;
    }

    i-=1;
    while (i >= 0) {
        printf("%c", str[i]);
        i--;
    }

    printf("\n");

    return 0;
}