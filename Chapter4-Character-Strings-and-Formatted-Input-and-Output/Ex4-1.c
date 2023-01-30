/* Programming Exercise 4-1 */

/*
    Write a program that asks for your first name, your last name, and then prints the names
    in the format last, first.
*/

#include<stdio.h>

int main(void) {
    char fname[10], lname[10];
    printf("Please enter you full name: ");
    scanf("%s %s", fname, lname);

    printf("%s, %s\n", lname, fname);
    return 0;
}
