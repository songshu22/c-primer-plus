/* Programming Exercise 6-13 */

/*
    Write a program that creates an eight-element array of ints and sets the elements to the
    first eight powers of 2 and then prints the values. Use a for loop to set the values, and,
    for variety, use a do while loop to display the values.
*/

#include<stdio.h>

int main(void) {
    int arr[8];
    int value = 1;
    for (int i = 0; i < 8; i++) {
        arr[i] = value;
        value *= 2;
    }

    int i = 0;
    do {
        printf("%d\n", arr[i]);
        i++;
    } while (i < 8);
    return 0;
}
