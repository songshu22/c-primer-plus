/* Programming Exercises 10-11.c */

/*
    Write a program that declares a 3x5 array of int and initializes it to some values of
    your choice. Have the program print the values, double all the values, and then display
    the new values. Write a function to do the displaying and a second function to do the
    doubling. Have the functions take the array name and the number of rows as arguments.
 */

#include <stdio.h>
#define ROW 3
#define COL 5

void display(int array[ROW][COL]);
void doubling(int array[ROW][COL]);

int main(void) {

    int array[ROW][COL] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    display(array);
    doubling(array);
    display(array);
    return 0;
}

void display(int array[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void doubling(int array[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            array[i][j]*=2;
        }
    }
}