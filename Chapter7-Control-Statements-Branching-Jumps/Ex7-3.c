/* Programming Exercise 7-3 */

/*
    Write a program that reads integers until 0 is entered. After input terminates, the
    program should report the total number of even integers (excluding the 0) entered, the
    average value of the even integers, the total number of odd integers entered, and the
    average value of the odd integers.

    Please enter your numbers:
    1 2 3 4 5 6 7 8 9 0
    The number of evens: 4
    The average value of evens: 5
    The number of odds: 5
    The average value of odds: 5
*/

#include<stdio.h>

int main(void) {
    int sum_even = 0, count_even = 0;
    int count_odd = 0, sum_odd = 0;
    float avg_even = 0.0, avg_odd = 0.0;
    int num;

    while (scanf("%d", &num) == 1 && num != 0) {
        if (num % 2) {
            count_odd += 1;
            sum_odd += num;
        } else {
            count_even += 1;
            sum_even += num;
        }
    }

    printf("The total number of evens = %d\n", count_even);
    if (count_even) {
        avg_even = (float)sum_even / (float)count_even;
        printf("The average value of the even integers = %.2f.\n", avg_even);
    }
    printf("The total number of odds = %d\n", count_odd);
    if (count_odd) {
        avg_odd = (float)sum_odd / (float)count_odd;
        printf("The average value of the odd integers = %.2f.\n", avg_odd);
    }
    return 0;
}
