/* Programming Exercise */

/*
    Write a program that creates an integer variable called toes. Have the program set toes
    to 10. Also have the program calculate what twice toes is and what toes squared is. The
    program should print all three values, identifying them.
*/

#include<stdio.h>

int main(void) {
    int toes = 10;
    int toes_doubled = toes * 2;
    int toes_squared = toes * toes;

    printf("toes = %d, twice toes is %d, toes squared is %d\n", toes, toes_doubled, toes_squared);
    return 0;
}