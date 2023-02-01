/* Programming Exercise 6-7 */

/*
    Write a program that reads a single word into a character array and then prints the word
    backward. Hint: Use strlen() (Chapter 4) to compute the index of the last character in
    the array.
*/

#include<stdio.h>
#include<string.h>

int main(void) {
    char word[20];
    printf("Please enter a word: ");
    scanf("%s", word);
    for (int i = strlen(word); i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}