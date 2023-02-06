/* Programming Exercise 9-3 */

/*
     Write a function that takes three arguments: a character and two integers. The character
     is to be printed. The first integer specifies the number of times that the character is to
     be printed on a line, and the second integer specifies the number of lines that are to be
     printed. Write a program that makes use of this function.

    Please enter the character: c
    Please enter the number of columns and the number of rows: 3 2
    ccc
    ccc

    Please enter the character: y
    Please enter the number of columns and the number of rows: 7 7
    yyyyyyy
    yyyyyyy
    yyyyyyy
    yyyyyyy
    yyyyyyy
    yyyyyyy
    yyyyyyy

 */

#include <stdio.h>

void printch(char ch, int row, int col);

int main(void) {
    char ch;
    int row, col;
    printf("Please enter the character: ");
    scanf("%c", &ch);
    printf("Please enter the number of columns and the number of rows: ");
    scanf("%d %d", &col, &row);
    printch(ch, row, col);
    return 0;
}

void printch(char ch, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}
